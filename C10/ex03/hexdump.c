/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexdump.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:48:43 by junng             #+#    #+#             */
/*   Updated: 2023/03/03 03:33:59 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	process_line(char *prev_s, char *buffer, int *y, int *os)
{
	int	x;

	x = 0;
	while (prev_s[x] && x < 16 && prev_s[x] == buffer[*y + x])
		x++;
	if (x == 16)
	{
		if (prev_s[16] != '1')
		{
			display_offset_prev_s(prev_s, *os, prev_s[17] - '0');
			ft_putstr("*\n");
		}
		prev_s[16] = '1';
		*os += 16;
		*y += 16;
		return (1);
	}
	if (prev_s[16] != '1')
		display_offset_prev_s(prev_s, *os, prev_s[17] - '0');
	prev_s[16] = '0';
	return (0);
}

void	display_last_line(char *prev_s, int *os)
{
	int	z;
	int	n;

	z = 0;
	n = *os;
	while (++n % 16)
		;
	display_offset(n, prev_s[17] - '0', 0);
	while (prev_s[z] && z < *os % 16)
	{
		process_hex(prev_s[z], z, prev_s[17] - '0');
		z++;
	}
	display_spaces(*os, prev_s[17] - '0');
	if (prev_s[17] - '0')
		display_ascii(prev_s, *os % 16);
	*os = *os + 16;
}

void	process_files(char **av, int is_c)
{
	int		x;
	int		y;
	int		os;
	char	*buffer;
	char	prev_s[19];

	initalize_var(&x, prev_s, &os, is_c);
	while (av[x])
	{
		y = 0;
		buffer = read_file(av[x]);
		while (buffer && buffer[y])
		{
			if (os && os % 16 == 0 && process_line(prev_s, buffer, &y, &os))
				continue ;
			prev_s[os++ % 16] = buffer[y++];
		}
		free_buffer_increment_x(buffer, &x);
	}
	if (os % 16 == 0)
		process_line(prev_s, buffer, &y, &os);
	else
		display_last_line(prev_s, &os);
	lalala(os, prev_s[17] - '0');
}

int	main(int ac, char **av)
{
	int		n;
	int		is_c;

	if (ac > 1)
	{
		n = 1;
		is_c = is_c_option(av[1]);
		if ((is_c && ac > 2) || !is_c)
			process_files(av, is_c);
	}
}
