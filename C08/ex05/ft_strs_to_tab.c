/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 00:59:52 by junng             #+#    #+#             */
/*   Updated: 2023/02/21 17:01:11 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str)
	{
		n++;
		str++;
	}
	return (n);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (temp);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			n;
	t_stock_str	*s;

	s = (struct s_stock_str *) malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!s)
	{
		s = 0;
		return (s);
	}
	n = 0;
	while (n < ac)
	{
		(s + n)->size = ft_strlen(av[n]);
		(s + n)->str = av[n];
		(s + n)->copy = (char *) malloc(ft_strlen(av[n]) * sizeof(char));
		ft_strcpy((s + n)->copy, av[n]);
		n++;
	}
	(s + n)->size = 0;
	(s + n)->str = "";
	(s + n)->copy = "";
	return (s);
}
