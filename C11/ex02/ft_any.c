/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:22:29 by junng             #+#    #+#             */
/*   Updated: 2023/02/26 21:39:18 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//if the passed function returns anything other than 0
//return 1
//else
//return 0

int	ft_any(char **tab, int (*f)(char *))
{
	int	x;

	x = 0;
	while (tab[x])
	{
		if ((*f)(tab[x]) != 0)
			return (1);
		x++;
	}
	return (0);
}
