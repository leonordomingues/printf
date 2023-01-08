/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:23:46 by lda-cunh          #+#    #+#             */
/*   Updated: 2023/01/08 18:31:28 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_flag(char c, va_list list, int *counter)
{
	if (c == 'c')
		*counter += ft_putchar((char) va_arg(list, int));
	else if (c == 's')
		*counter += ft_putstr(va_arg(list, char *));
	else if (c == 'p')
		ft_pointer_adress(va_arg(list, unsigned long), \
			"0123456789abcdef", counter);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(list, int), counter);
	else if (c == 'u')
		ft_putnbr_unsigned(va_arg(list, unsigned), "0123456789", counter);
	else if (c == 'x')
		ft_hexa(va_arg(list, unsigned), "0123456789abcdef", counter);
	else if (c == 'X')
		ft_hexa(va_arg(list, unsigned), "0123456789ABCDEF", counter);
	else if (c == '%')
		*counter += ft_putchar(c);
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
			check_flag(str[++i], list, &counter);
		else
			counter += write (1, &str[i], 1);
		i++;
	}
	va_end(list);
	return (counter);
}

// int	main()
// {
// 	//int j = ft_printf("s: %s, numb: %d, hex: %x\n", "certo", 2345678, 34445);
// 	// ft_printf("%%c: %c\n", '7');
// 	// ft_printf("p: %p\n", i);
// 	// ft_printf("d: %d\n", 5);
// 	int j =  ft_printf("u: %u\n", LONG_MIN);
// 	//int j = ft_printf("x: %x\n", 34445);
// 	// ft_printf("X: %X\n", 56);

//     //int w = printf("s: %s, numb: %d, hex: %x\n", "certo", 2345678, 34445);
// 	// printf("%%c: %c\n", '7');
//     // printf("p: %p\n", i);
//     // printf("d: %d\n", 5);
//     int w = printf("u: %u\n", LONG_MIN);
// 	//printf("x: %x\n", 34445);
//     // printf("X: %X\n", 56);
// 	printf("meu: %d\noriginal: %d\n", j, w);
// }
