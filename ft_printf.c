#include "printf.h"

void	check_flag(char c, va_list list)
{
	if (c == 'c')
		ft_putchar((char) va_arg(list, int));
	else if (c == 's')
		ft_putstr(va_arg(list, char *));
	else if (c == 'p')
		ft_pointer_adress(va_arg(list, size_t), "0123456789abcdef");
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(list, int));
	else if (c == 'u')
		ft_putnbr_unsigned(va_arg(list, size_t), "0123456789");
	else if (c == 'x')
		ft_hexa(va_arg(list, size_t), "0123456789abcdef");
	else if (c == 'X')
		ft_hexa(va_arg(list, size_t), "0123456789ABCDEF");
	else if (c == '%')
		ft_putchar(c);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		i;
	int		counter;
	
	i = 0;
	counter = 0;
	va_start(list, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			check_flag(str[++i], list);
			counter--;
		}
		else
			write (1, &str[i], 1);
		i++;
	}
	counter += i;
	va_end(list);
	return (i);
}

/*int	main()
{
	char	*i;
	ft_printf("%%c: %c\n", '7');
	ft_printf("s: %s\n", "certo");
	ft_printf("p: %p\n", i);
	ft_printf("d: %d\n", 5);
	ft_printf("u: %u\n", 23456789);
	ft_printf("x: %x\n", 34);
	ft_printf("X: %X\n", 56);

	printf("%%c: %c\n", '7');
        printf("s: %s\n", "certo");
        printf("p: %p\n", i);
        printf("d: %d\n", 5);
        printf("u: %u\n", 23456789);
        printf("x: %x\n", 34);
        printf("X: %X\n", 56);
}*/
