/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handles.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakra <kakra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 09:33:23 by kakra             #+#    #+#             */
/*   Updated: 2024/06/21 12:08:16 by kakra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	handle_c(va_list args, int *i, int *x)
{
	char	c;

	c = va_arg(args, int);
	ft_putchar_fd(c, 1, x);
	(*i)++;
}

void	handle_s(va_list args, int *i, int *x)
{
	char	*c;

	c = va_arg(args, char *);
	ft_putstr_fd(c, 1, x);
	(*i)++;
}

void	handle_p(va_list args, int *i, int *x)
{
	void	*c;
	int		*ptr;

	ptr = x;
	c = va_arg(args, void *);
	if (!c)
	{
		write(1, "(nil)", 5);
		*x += 5;
	}
	else
	{
		write(1, "0x", 2);
		ft_puthex(c, ptr);
		*x = *x + 2;
	}
	(*i)++;
}

void	handle_d(va_list args, int *i, int *x)
{
	int	c;

	c = va_arg(args, int);
	ft_handle_decimal(c, x);
	(*i)++;
}

void	handle_i(va_list args, int *i, int *x)
{
	int	c;

	c = va_arg(args, int);
	ft_handle_decimal(c, x);
	(*i)++;
}
