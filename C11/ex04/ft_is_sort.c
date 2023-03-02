/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:55:59 by junng             #+#    #+#             */
/*   Updated: 2023/02/27 20:22:50 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return 1 if sorted
// return 0

// function given
// returns -1, i1 < i2;
// returns 0, i1 == i2;
// returns 1, i1 > i2;

// if postive the neg 0 vice versa

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	x;
	int	y;
	int	r;

	x = 1;
	y = 0;
	length--;
	if (tab == 0)
		return (0);
	while (tab[x] != '\0' && length--)
	{
		r = (*f)(tab[x - 1], tab[x]);
		if (y == 0)
			y = r;
		printf("r: %d, y: %d, d: %d, d2: %d\n", r, y, tab[x - 1], tab[x]);
		if (r > 0 && y < 0)
			return (0);
		else if (r < 0 && y > 0)
			return (0);
		x++;
	}	
	return (1);
}
