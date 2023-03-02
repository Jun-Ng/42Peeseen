/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 01:46:00 by junng             #+#    #+#             */
/*   Updated: 2023/02/25 03:20:51 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	**ft_split(char *str, char *charset);

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, sizeof(*str));
}

int	main(void)
{
	char	str[] = "_your_mom_";
	char	charset[] = "_";
	char	**p;

	printf("str: %s\n", str);
	printf("charset: %s\n", charset);
	p = ft_split(str, charset);
	while (*p)
	{
		printf("str: %s\n", *p);
		p++;
	}
	return (0);
}
