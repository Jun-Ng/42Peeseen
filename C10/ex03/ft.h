/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:53:40 by junng             #+#    #+#             */
/*   Updated: 2023/03/03 03:28:42 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
int		is_not_printable(char c);

int		get_file_len(char *f);
int		is_c_option(char *s);
char	*read_file(char *f);

void	process_hex(char c, int offset, int is_c);
void	ft_put_alphabets(int nb);
void	display_hex(char c);
void	ft_puthex(int nb);

void	display_offset(int offset, int max, int last);
void	display_ascii(char *prev_s, int limit);
void	display_spaces(int i, int is_c);

void	initalize_var(int *x, char *prev_s, int *offset, int is_c);
void	display_offset_prev_s(char *prev_s, int os, int is_c);
void	free_buffer_increment_x(char *buffer, int *x);
void	lalala(int os, int is_c);
#endif