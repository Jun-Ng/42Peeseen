/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:05:21 by junng             #+#    #+#             */
/*   Updated: 2023/02/21 19:27:08 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, sizeof(*str));
		str++;
	}
}

void	ft_putnbr(int nb)
{
	char	n;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		n = nb + '0';
		write(1, &n, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	n;

	n = 0;
	while ((par + n)->str != 0)
	{
		ft_putstr((par + n)->str);
		write(1, "\n", 1);
		ft_putnbr((par + n)->size);
		write(1, "\n", 1);
		ft_putstr((par + n)->copy);
		write(1, "\n", 1);
		par++;
	}
}
