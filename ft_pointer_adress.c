#include "ft_printf.h"

void	ft_pointer_adress(unsigned long i, char *base, int *counter)
{
	*counter += write(1, "0x", 2);
	ft_hexa(i, base, counter);
}
