/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 00:57:40 by junng             #+#    #+#             */
/*   Updated: 2023/02/27 17:29:00 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && s1++ && s2++)
		;
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int	main(void)
{
	char	*str2[10] = {"ac", "ab", "zasd", "ab", "Za", "az", "ds", "faa", "Ass"};
	int		x;

	x = 0;
	ft_advanced_sort_string_tab(str2, &ft_strcmp);
	while (str2[x])
	{
		printf("%s, ", str2[x]);
		x++;
	}
}
