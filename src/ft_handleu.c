/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakra <kakra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:29:16 by kakra             #+#    #+#             */
/*   Updated: 2024/06/21 09:51:41 by kakra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_handleu(unsigned int c, int *x)
{
	unsigned int	a;
	int				*l;

	l = x;
	a = c;
	if (a >= 10)
	{
		ft_handleu(a / 10, l);
		ft_handleu(a % 10, l);
	}
	if (a < 10)
	{
		a = a + '0';
		write(1, &a, 1);
		(*x)++;
	}
}
