/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 01:44:34 by junng             #+#    #+#             */
/*   Updated: 2023/02/25 03:18:27 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	init_len(char *str, char *charset)
{
	int	x;
	int	len;

	x = 0;
	len = 0;
	while (str[x])
	{
		while (str[x] && in_charset(str[x], charset))
			x++;
		if (str[x])
			len++;
		while (str[x] && !in_charset(str[x], charset))
			x++;
	}
	return (len);
}

int	cs_strlen(char *str, char *charset, int x)
{
	int	y;

	y = 0;
	while (str[x + y] && !in_charset(str[x + y], charset))
		y++;
	return (y);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		x;
	int		z;
	char	*c;

	arr = malloc(sizeof(*arr) * (init_len(str, charset) + 1));
	x = 0;
	z = 0;
	while (str[x])
	{
		while (str[x] && in_charset(str[x], charset))
			x++;
		if (!str[x])
			break ;
		arr[z] = malloc(sizeof(**arr) * (cs_strlen(str, charset, x) + 1));
		c = arr[z];
		while (str[x] && !in_charset(str[x], charset))
			*c++ = str[x++];
		*c = '\0';
		z++;
	}
	arr[z] = 0;
	return (arr);
}
