/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakra <kakra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:42:39 by kakra             #+#    #+#             */
/*   Updated: 2024/06/21 12:08:46 by kakra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_puthex(void *c, int *x)
{
	unsigned long	f;
	char			*hex;

	hex = "0123456789abcdef";
	f = (unsigned long)c;
	if (f >= 16)
	{
		ft_puthex((void *)(f / 16), x);
	}
	write(1, &hex[f % 16], 1);
	(*x)++;
}
