/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:30:06 by junng             #+#    #+#             */
/*   Updated: 2023/03/02 20:58:56 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	display_err(char *f)
{
	ft_putstr("ft_hexdump: ");
	ft_putstr(f);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
}

int	get_file_len(char *f)
{
	int		fd;
	int		n;
	int		len;
	char	s;

	fd = open(f, O_RDONLY);
	if (fd < 0)
	{
		display_err(f);
		return (0);
	}
	n = read(fd, &s, 1);
	len = 0;
	while (n != -1 && n != 0)
	{
		n = read(fd, &s, 1);
		len++;
	}
	close(fd);
	return (len);
}

char	*read_file(char *f)
{
	int		len;
	int		fd;
	char	*buffer;

	len = get_file_len(f);
	buffer = 0;
	if (len)
	{
		buffer = malloc(sizeof(*buffer) * (len));
		if (!buffer)
			return (0);
		fd = open(f, O_RDWR);
		if (fd < 0)
		{
			display_err(f);
			return (0);
		}
		read(fd, buffer, len);
		buffer[len] = 0;
	}
	return (buffer);
}
