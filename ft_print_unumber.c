/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unumber.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:54:03 by rodsanch          #+#    #+#             */
/*   Updated: 2022/05/17 16:02:29 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unumber(unsigned int unb)
{
	int	len;

	len = 0;
	if (unb > 9)
	{
		len = len + ft_print_unumber(unb / 10);
		len = len + ft_print_char(unb % 10 + '0');
	}
	else
		len = len + ft_print_char(unb + '0');
	return (len);
}
