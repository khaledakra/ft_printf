/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakra <kakra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 03:12:21 by kakra             #+#    #+#             */
/*   Updated: 2024/06/21 12:09:07 by kakra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_verify(const char *f, int *x, int *i, va_list args)
{
	if (f[*i] == '%' && f[*i + 1] == 'c')
		handle_c(args, i, x);
	else if (f[*i] == '%' && f[*i + 1] == 's')
		handle_s(args, i, x);
	else if (f[*i] == '%' && f[*i + 1] == 'p')
		handle_p(args, i, x);
	else if ((f[*i] == '%' && f[*i + 1] == 'd')
		|| (f[*i] == '%' && f[*i + 1] == 'i'))
		handle_d(args, i, x);
	else if (f[*i] == '%' && f[*i + 1] == 'u')
		handle_u(args, i, x);
	else if (f[*i] == '%' && f[*i + 1] == 'x')
		handle_x(args, i, x);
	else if (f[*i] == '%' && f[*i + 1] == 'X')
		handle_xx(args, i, x);
	else if (f[*i] == '%' && f[*i + 1] == '%')
		handle_per(i, x);
	else
		handle_else(i, x, f);
}

int	ft_printf(const char *f, ...)
{
	int		i;
	va_list	args;
	int		x;

	va_start(args, f);
	i = 0;
	x = 0;
	while (f[i] != '\0')
	{
		ft_verify(f, &x, &i, args);
		i++;
	}
	va_end(args);
	return (x);
}
