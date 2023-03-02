/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 00:57:40 by junng             #+#    #+#             */
/*   Updated: 2023/02/27 16:55:26 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int	main(void)
{
	char	*str[10] = {"ac", "ab", "zasd", "ab", "Za", "az", "ds", "faa", "Ass"};
	int		x;

	ft_sort_string_tab(str);
	x = 0;
	while (str[x])
	{
		printf("%s, ", str[x]);
		x++;
	}
}
