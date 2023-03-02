/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 22:32:12 by junng             #+#    #+#             */
/*   Updated: 2023/02/27 00:19:00 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	plus(int a, int b);
int	minus(int a, int b);
int	times(int a, int b);
int	division(int a, int b);
int	modulus(int a, int b);

int	ft_atoi(char *str)
{
	int	negative;
	int	nb;
	int	digit;

	negative = 1;
	while ((*str >= 8 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			negative *= -1;
	}
	nb = 0;
	while (*str >= '0' && *str <= '9')
	{
		digit = *str - '0';
		nb = nb * 10 + digit;
		str++;
	}
	return (nb * negative);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

int	is_op(char op)
{
	if (op == '+')
		return (0);
	else if (op == '-')
		return (1);
	else if (op == '*')
		return (2);
	else if (op == '/')
		return (3);
	else if (op == '%')
		return (4);
	return (-1);
}

void	assign_op_fc(int (**op_fc)(int, int))
{
	op_fc[0] = plus;
	op_fc[1] = minus;
	op_fc[2] = times;
	op_fc[3] = division;
	op_fc[4] = modulus;
	op_fc[5] = 0;
}

int	main(int ac, char **av)
{
	int	(*op_fc[6])(int a, int b);
	int	op_i;
	int	a;
	int	b;

	if (ac == 4)
	{
		a = ft_atoi(av[1]);
		op_i = is_op(av[2][0]);
		b = ft_atoi(av[3]);
		if (op_i == -1 || ((op_i == 3 || op_i == 4) && b == 0))
		{
			if (op_i == -1)
				write(1, "0", 1);
			else if (op_i == 3)
				write(1, "Stop : division by zero", 23);
			else if (op_i == 4)
				write(1, "Stop : modulo by zero", 21);
			return (0);
		}
		assign_op_fc(&(*op_fc));
		ft_putnbr((*op_fc[op_i])(a, b));
	}
	return (0);
}
