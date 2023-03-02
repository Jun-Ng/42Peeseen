/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 00:56:08 by junng             #+#    #+#             */
/*   Updated: 2023/02/27 16:54:17 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && s1++ && s2++)
		;
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int	ft_tablen(char **str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
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

int	ft_swap_str(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
	return (1);
}

void	ft_sort_string_tab(char **tab)
{
	int	x;
	int	swapped;
	int	len;

	x = 0;
	swapped = 1;
	len = ft_tablen(tab);
	while (swapped)
	{
		swapped = 0;
		while (x < len - 1)
		{
			if (ft_strcmp(tab[x], tab[x + 1]) > 0)
				swapped = ft_swap_str(&tab[x], &tab[x + 1]);
			x++;
		}
		while (x > 0)
		{
			if (ft_strcmp(tab[x - 1], tab[x]) > 0)
				swapped = ft_swap_str(&tab[x - 1], &tab[x]);
			x--;
		}
	}
}
