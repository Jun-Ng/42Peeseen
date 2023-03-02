/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:20:55 by junng             #+#    #+#             */
/*   Updated: 2023/03/01 20:48:28 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*n;

	n = malloc(sizeof(*n));
	if (!n)
		(*begin_list)->data = data;
	else
	{
		while ((*begin_list)->next)
			begin_list = &(*begin_list)->next;
		n = ft_create_elem(data);
		(*begin_list)->next = n;
	}
}
