/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:24:31 by lda-cunh          #+#    #+#             */
/*   Updated: 2023/01/08 20:13:54 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa(unsigned long int i, char *base, int *counter)
{
	if (i >= 16)
		ft_hexa(i / 16, base, counter);
	*counter += write (1, &base[i % 16], 1);
}
