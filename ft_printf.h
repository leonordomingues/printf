/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:24:13 by lda-cunh          #+#    #+#             */
/*   Updated: 2023/01/08 19:06:03 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdlib.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
void	ft_putnbr(int i, int *counter);
void	ft_putnbr_unsigned(unsigned int i, char *base, int *counter);
void	ft_hexa(unsigned long int i, char *base, int *counter);
int		ft_printf(const char *str, ...);
void	ft_pointer_adress(unsigned long int i, char *base, int *counter);

#endif
