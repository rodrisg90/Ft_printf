/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:29:04 by rodsanch          #+#    #+#             */
/*   Updated: 2022/05/18 11:09:33 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char format)
{
	int		len;

	len = 0;
	if (format == 'c')
		len = len + ft_print_char(va_arg(args, int));
	if (format == 's')
		len = len + ft_print_string(va_arg(args, char *));
	if (format == 'd' || format == 'i')
		len = len + ft_print_number(va_arg(args, int));
	if (format == 'u')
		len = len + ft_print_unumber(va_arg(args, unsigned int));
	if (format == 'x' || format == 'X')
		len = len + ft_print_hexa(va_arg(args, unsigned int), format);
	if (format == 'p')
		len = len + ft_print_string("0x") + ft_print_hexa \
			(va_arg(args, unsigned long int), format);
	if (format == '%')
		len = len + ft_print_char('%');
	return (len);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			len = len + ft_format(args, str[i + 1]);
			i++;
		}
		else
			len = len + ft_print_char(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

/* int	main(void)
{
	int	i;
	int	d;

	i = printf("%c%s%d%i%u%x%X%p%%\n",'s', "lala", 5, 5, 5, 15, 16, "hola");
	d = ft_printf("%c%s%d%i%u%x%X%p%%\n",'s', "lala", 5, 5, 5, 15, 16, "hola");
	printf("Esto devuelve el printf original:%d\nY esto el nuestro:%d", i, d);
}
 */