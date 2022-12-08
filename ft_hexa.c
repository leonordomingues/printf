#include "printf.h"

void	ft_hexa(size_t i, char *base, int *counter)
{
	if(i >= 16)
		ft_hexa(i / 16, base, counter);
	*counter += write (1, &base[i % 16], 1);
}
