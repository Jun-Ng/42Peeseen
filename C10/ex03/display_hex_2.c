/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_hex_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:24:37 by junng             #+#    #+#             */
/*   Updated: 2023/03/03 03:03:11 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	display_offset(int offset, int max, int last)
{
	int		a;
	char	hex_string[9];

	a = 0;
	offset -= 16;
	while (a < max + 7)
	{
		hex_string[a] = "0123456789abcdef"[offset % 16];
		offset = offset >> 4;
		a++;
	}
	hex_string[a] = 0;
	while (--a > -1)
		write(1, &hex_string[a], 1);
	if (max && !last)
		write(1, " ", 1);
}

void	display_spaces(int i, int is_c)
{
	int	x;

	x = i;
	while (x % 16)
	{
		if (x % 16 != 0 && x % 8 == 0 && is_c)
			ft_putstr("    ");
		else
			ft_putstr("   ");
		x++;
	}
}

void	display_ascii(char *prev_s, int limit)
{
	int	x;

	x = 0;
	ft_putstr("  |");
	while (x < limit && x < 16)
	{
		if (is_not_printable(prev_s[x]))
			write(1, ".", 1);
		else
			write(1, &prev_s[x], 1);
		x++;
	}
	ft_putstr("|");
}
