/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:58:12 by junng             #+#    #+#             */
/*   Updated: 2023/02/26 21:19:51 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(*arr) * (length + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (length--)
	{
		arr[i] = (*f)(tab[i]);
		i++;
	}
	arr[i] = 0;
	return (arr);
}
