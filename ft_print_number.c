/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:04:33 by rodsanch          #+#    #+#             */
/*   Updated: 2022/05/17 16:01:47 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int nb)
{
	int	len;

	len = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nb < 0)
	{
		len = ft_print_char('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		len = len + ft_print_number(nb / 10);
		len = len + ft_print_char(nb % 10 + '0');
	}
	else
		len = len + ft_print_char(nb + '0');
	return (len);
}
