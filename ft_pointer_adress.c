/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_adress.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:22:31 by lda-cunh          #+#    #+#             */
/*   Updated: 2023/01/08 20:13:09 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer_adress(unsigned long int i, char *base, int *counter)
{
	if (i == 0)
	{
		*counter += write(1, "(nil)", 5);
		return ;
	}
	*counter += write(1, "0x", 2);
	ft_hexa(i, base, counter);
}
