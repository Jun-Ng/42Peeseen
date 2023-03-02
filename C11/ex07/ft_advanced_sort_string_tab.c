/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:58:20 by junng             #+#    #+#             */
/*   Updated: 2023/02/27 17:06:08 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tablen(char **str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

int	ft_swap_str(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
	return (1);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if ((*cmp)(tab[x], tab[x + 1]) > 0)
				swapped = ft_swap_str(&tab[x], &tab[x + 1]);
			x++;
		}
		while (x > 0)
		{
			if ((*cmp)(tab[x - 1], tab[x]) > 0)
				swapped = ft_swap_str(&tab[x - 1], &tab[x]);
			x--;
		}
	}
}
