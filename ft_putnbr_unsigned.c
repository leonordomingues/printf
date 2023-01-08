/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:24:59 by lda-cunh          #+#    #+#             */
/*   Updated: 2023/01/08 18:33:50 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned i, char *base, int *counter)
{
	if (i >= 10)
		ft_putnbr_unsigned(i / 10, base, counter);
	*counter += write(1, &base[i % 10], 1);
}
