/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 23:03:15 by junng             #+#    #+#             */
/*   Updated: 2023/03/01 21:45:05 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*n;

	n = ft_create_elem(data);
	n->next = (*begin_list);
	(*begin_list) = n;
}

void	printlist(t_list *node)
{
	while (node)
	{
		printf("p: %p\n", node);
		printf("%s\n", node->data);
		node = node->next;
	}
}

int	ft_list_size(t_list *begin_list)
{
	int	l;

	l = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		l++;
	}
	return (l);
}

t_list	*ft_list_push_strs(int size, char **strs);

int	main(void)
{
	t_list	*p;
	char	*strs[5] = {"hello", "your", "mom", "gay"};
	int		i;

	p = ft_list_push_strs(4, strs);
	printlist(p);
}
