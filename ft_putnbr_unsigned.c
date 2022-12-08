#include "ft_printf.h"

void	ft_putnbr_unsigned(size_t i, char *base, int *counter)
{
	if (i < LONG_MAX)
	{
		if (i >= 10)
			ft_putnbr_unsigned(i / 10, base, counter);
		*counter += write(1, &base[i % 10], 1);
	}
	else
		ft_putnbr(i, counter);
}
