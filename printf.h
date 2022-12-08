#ifndef PRINTF_H
# define PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int i);
void	ft_putnbr_unsigned(size_t i, char *base);
void	ft_hexa(size_t i, char *base);
int		ft_printf(const char *str, ...);
void	ft_pointer_adress(size_t i, char *base);

#endif
