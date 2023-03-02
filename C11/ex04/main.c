/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:25:23 by junng             #+#    #+#             */
/*   Updated: 2023/02/27 20:22:03 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>


int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int lminusr(int l, int r)
{
	return (l - r);
}

int	main(void)
{
	int		ar[23] = {7, 7, 7, 7, 6, 6, 6, 5, 5, 4, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 1};
	int 	any;

	any = ft_is_sort(ar, 100, &lminusr);
	printf("sorted: %d\n", any);
}
