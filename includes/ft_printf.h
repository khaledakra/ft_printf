/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakra <kakra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 03:19:22 by kakra             #+#    #+#             */
/*   Updated: 2024/06/21 11:09:59 by kakra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

void	ft_putstr_fd(char *s, int fd, int *x);
void	ft_putchar_fd(char c, int fd, int *x);
void	ft_puthex(void *c, int *x);
void	ft_handle_decimal(int c, int *x);
void	ft_handleu(unsigned int c, int *x);
void	ft_x(int c, int *ptr);
void	ft_xx(int c, int *x);
int		ft_strlen(const char *str);
int		ft_printf(const char *f, ...);
void	handle_c(va_list args, int *i, int *x);
void	handle_s(va_list args, int *i, int *x);
void	handle_p(va_list args, int *i, int *x);
void	handle_d(va_list args, int *i, int *x);
void	handle_i(va_list args, int *i, int *x);
void	handle_u(va_list args, int *i, int *x);
void	handle_x(va_list args, int *i, int *x);
void	handle_xx(va_list args, int *i, int *x);
void	handle_per(int *i, int *x);
void	handle_else(int *i, int *x, const char *f);

#endif