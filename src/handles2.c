/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handles2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakra <kakra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 09:35:19 by kakra             #+#    #+#             */
/*   Updated: 2024/06/21 10:07:31 by kakra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	handle_u(va_list args, int *i, int *x)
{
	unsigned int	c;

	c = va_arg(args, unsigned int);
	ft_handleu(c, x);
	(*i)++;
}

void	handle_x(va_list args, int *i, int *x)
{
	int	c;
	int	*ptr;

	ptr = x;
	c = va_arg(args, int);
	ft_x(c, ptr);
	(*i)++;
}

void	handle_xx(va_list args, int *i, int *x)
{
	int	c;
	int	*ptr;

	ptr = x;
	c = va_arg(args, int);
	ft_xx(c, ptr);
	(*i)++;
}

void	handle_per(int *i, int *x)
{
	write (1, "%", 1);
	(*x)++;
	(*i)++;
}

void	handle_else(int *i, int *x, const char *f)
{
	write (1, &f[*i], 1);
	(*x)++;
}
