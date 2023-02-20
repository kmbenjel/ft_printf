/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_cf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:26:34 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/20 16:18:04 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_CF_H
# define FT_PRINTF_CF_H
# include "../libft/libft.h"
# include <stdarg.h>

int	ft_print_character(va_list ap);
int	ft_print_decimal(va_list ap);
int	ft_print_hexadecimal_lowercase(va_list ap);
int	ft_print_hexadecimal_uppercase(va_list ap);
int	ft_print_percent(va_list ap);
int	ft_print_pointer(va_list ap);
int	ft_print_string(va_list ap);
int	ft_print_unsigned(va_list ap);

#endif
