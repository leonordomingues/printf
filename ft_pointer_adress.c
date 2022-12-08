#include "ft_printf.h"

void	ft_pointer_adress(unsigned i, char *base, int *counter)
{
	if (!i)
	{
		*counter += write(1, "(nil)", 5);
		return ;
	}
	*counter += write(1, "0x", 2);
	ft_hexa(i, base, counter);
}
