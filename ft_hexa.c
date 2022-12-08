#include "ft_printf.h"

void	ft_hexa(unsigned i, char *base, int *counter)
{
	if(i >= 16)
		ft_hexa(i / 16, base, counter);
	*counter += write (1, &base[i % 16], 1);
}
