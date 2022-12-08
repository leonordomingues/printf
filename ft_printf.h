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
void	ft_putnbr_unsigned(unsigned i, char *base, int *counter);
void	ft_hexa(unsigned i, char *base, int *counter);
int		ft_printf(const char *str, ...);
void	ft_pointer_adress(unsigned i, char *base, int *counter);

#endif
