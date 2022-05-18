/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:11:19 by rodsanch          #+#    #+#             */
/*   Updated: 2022/05/18 11:00:07 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned long int nb, const char c)
{
	int	len;

	len = 0;
	if (c == 'x' || c == 'p')
	{
		if (nb >= 16)
			len = len + ft_print_hexa(nb / 16, c);
		len = len + ft_print_char("0123456789abcdef" [nb % 16]);
	}
	if (c == 'X')
	{
		if (nb >= 16)
			len = len + ft_print_hexa(nb / 16, c);
		len = len + ft_print_char("0123456789ABCDEF" [nb % 16]);
	}
	return (len);
}
