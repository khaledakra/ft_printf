/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handledecimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakra <kakra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:10:06 by kakra             #+#    #+#             */
/*   Updated: 2024/06/21 11:56:53 by kakra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_handle_decimal(int c, int *x)
{
	long	a;
	int		*l;

	l = x;
	a = c;
	if (a < 0)
	{
		write(1, "-", 1);
		a = a * -1;
		(*x)++;
	}
	if (a >= 10)
	{
		ft_handle_decimal(a / 10, l);
		ft_handle_decimal(a % 10, l);
	}
	if (a < 10)
	{
		a = a + '0';
		write(1, &a, 1);
		(*x)++;
	}
}
