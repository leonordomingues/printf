#include "printf.h"

void	ft_hexa(size_t i, char *base)
{
	if(i >= 16)
		ft_hexa(i / 16, base);
	write (1, &base[i % 16], 1);
}
