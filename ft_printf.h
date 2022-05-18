/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:27:41 by rodsanch          #+#    #+#             */
/*   Updated: 2022/05/18 11:08:34 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
int		ft_format(va_list args, const char format);
int		ft_print_char(int c);
int		ft_print_string(char *str);
int		ft_print_number(int nb);
int		ft_print_unumber(unsigned int unb);
int		ft_print_hexa(unsigned long int nb, const char c);

#endif
