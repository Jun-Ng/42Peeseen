/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stupid_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:46:58 by junng             #+#    #+#             */
/*   Updated: 2023/03/03 03:33:17 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	initalize_var(int *x, char *prev_s, int *offset, int is_c)
{
	*x = 1 + is_c;
	if (is_c)
		prev_s[17] = '1';
	else
		prev_s[17] = '0';
	prev_s[18] = 0;
	*offset = 0;
}

void	free_buffer_increment_x(char *buffer, int *x)
{
	if (buffer)
		free(buffer);
	*x += 1;
}

void	print_prev_s(char *prev_s, int os, int is_c)
{
	int	i;

	i = 0;
	while (i < 16)
		process_hex(prev_s[i++], os++, is_c);
	if (is_c)
		display_ascii(prev_s, 16);
	ft_putstr("\n");
}

void	display_offset_prev_s(char *prev_s, int os, int is_c)
{
	display_offset(os, is_c, 0);
	print_prev_s(prev_s, os, is_c);
}

void	lalala(int os, int is_c)
{
	if (os % 16)
		ft_putstr("\n");
	if (os % 16 == 0)
		display_offset(os + 16, is_c, 1);
	else
		display_offset(os, is_c, 1);
	ft_putstr("\n");
}
