/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:41:06 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/20 16:27:24 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_cf.h"

int	ft_print_decimal(va_list ap)
{
	char	*decimal;
	int		count;

	count = ft_strlen(decimal);
	decimal = ft_itoa(va_arg(ap, int));
	ft_putstr_fd(decimal, 1);
	return (count);
}

//  The DECIMAL variable is a string holding an integer (base 10).
