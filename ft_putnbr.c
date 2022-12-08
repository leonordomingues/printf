#include "printf.h"

void	ft_putnbr(int i)
{
	if (i >= INT_MIN && i <= INT_MAX)
	{
		if (i == INT_MIN)
		{
			ft_putchar('-');
			ft_putchar('2');
			ft_putnbr(147483648);
		}
		else if (i < 0)
		{
			ft_putchar('-');
			ft_putnbr(-i);
		}
		else if (i > 9)
		{
			ft_putnbr(i / 10);
			ft_putnbr(i % 10);
		}
		else
			ft_putchar(i + '0');
	}
}
