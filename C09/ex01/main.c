/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:12:26 by junng             #+#    #+#             */
/*   Updated: 2023/02/25 00:34:52 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

int	main(void)
{
	int a = 10;
	int b = 20;

	ft_putchar('a');
	ft_putstr("\n");
	ft_putstr("hahaha\n");
	ft_swap(&a, &b);
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("strcmp: %d\n", ft_strcmp("abc", "abc"));
	printf("len: %d\n", ft_strlen("nice"));
	return (0);
}
