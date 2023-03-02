/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:17:20 by junng             #+#    #+#             */
/*   Updated: 2023/03/01 21:44:43 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*n;

	n = ft_create_elem(data);
	n->next = (*begin_list);
	(*begin_list) = n;
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*n;

	n = NULL;
	while (size--)
		ft_list_push_front(&n, *strs++);
	return (n);
}
