#include "ft_printf.h"

void	ft_putnbr(int i, int *counter)
{
	if (i >= INT_MIN && i <= INT_MAX)
	{
		if (i == INT_MIN)
		{
			*counter += ft_putchar('-');
			*counter += ft_putchar('2');
			ft_putnbr(147483648, counter);
		}
		else if (i < 0)
		{
			*counter += ft_putchar('-');
			ft_putnbr(-i, counter);
		}
		else if (i > 9)
		{
			ft_putnbr(i / 10, counter);
			ft_putnbr(i % 10, counter);
		}
		else
			*counter += ft_putchar(i + '0');
	}
}
