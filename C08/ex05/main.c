/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 01:31:09 by junng             #+#    #+#             */
/*   Updated: 2023/02/21 19:28:54 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"

int	main(void)
{
	char		*str[3] = {"low", "STR45", "STR6789"};
	int			n;
	t_stock_str	*i;

	i = ft_strs_to_tab(3, str);
	n = 0;
	ft_show_tab(i);
	while (n < 4)
	{
		printf("t_stock_str  -> size: %d\n", (i + n)->size);
		printf("t_stock_str  -> str : %s\n", (i + n)->str);
		printf("t_stock_str  -> copy: %s\n", (i + n)->copy);
		n++;
	}
	return (0);
}
