/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:25:23 by junng             #+#    #+#             */
/*   Updated: 2023/02/26 21:41:48 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && s1++ && s2++)
		;
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int	is_bigger_than_zz(char *str)
{
	if (ft_strcmp(str, "zz") > 0)
		return (1);
	return (0);
}

int	ft_any(char **tab, int (*f)(char *));

int	main(void)
{
	char	*str[7] = {"bye", NULL, "not gay", "abc", "def", "gay"};
	int 	any;

	any = ft_any(str, &is_bigger_than_zz);
	printf("any: %d\n", any);
}
