#include "printf.h"

void	ft_putnbr_unsigned(size_t i, char *base)
{
	if (i > 10)
		ft_putnbr_unsigned(i / 10, base);
	write(1, &base[i % 10], 1);
}
