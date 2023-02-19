/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:41:06 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/19 16:30:57 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_cf.h"

int	ft_print_decimal(void)
{
	decimal = ft_itoa(va_arg(ap, int));
	ft_putstr_fd(decimal, 1);
	return (ft_strlen(decimal));
}

//  spec = conversion specifier.
//  decimal is a string holding an integer (base 10).
