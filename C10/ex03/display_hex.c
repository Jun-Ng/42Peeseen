/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:36:21 by junng             #+#    #+#             */
/*   Updated: 2023/03/03 02:27:36 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_put_alphabets(int nb)
{
	if (nb == 10)
		write(1, "a", 1);
	else if (nb == 11)
		write(1, "b", 1);
	else if (nb == 12)
		write(1, "c", 1);
	else if (nb == 13)
		write(1, "d", 1);
	else if (nb == 14)
		write(1, "e", 1);
	else if (nb == 15)
		write(1, "f", 1);
}

void	ft_puthex(int nb)
{
	if (nb > 15)
	{
		ft_puthex(nb / 16);
		ft_puthex(nb % 16);
	}
	else
	{
		if (nb > 9)
			ft_put_alphabets(nb);
		else
			ft_putchar(nb + '0');
	}
}

void	display_hex(char c)
{
	int		i;

	i = (int)c;
	if (i < 16)
	{
		write(1, "0", 1);
		if (i > 9)
			ft_put_alphabets(i);
		else
			ft_putchar(i + '0');
	}
	else
		ft_puthex(i);
}

void	process_hex(char c, int offset, int is_c)
{
	if (offset % 16 != 0 && offset % 8 == 0 && is_c)
		ft_putstr("  ");
	else
		ft_putstr(" ");
	display_hex(c);
}
