/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal_uppercase.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:41:22 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/20 16:33:35 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_cf.h"

int	ft_print_hexadecimal_uppercase(va_list ap)
{
	int		intarg;
	int		count;
	char	*hex;

	intarg = va_arg(ap, int);
	hex = ft_strjoin("0X", ft_itoh(intarg));
	ft_putstr_fd(hex, 1);
	count = ft_strlen(hex);
	return (count);
}

//  FT_ITOH stands for: Integer To Hexadecimal.
//  INTARG stands for: Integer Argument.
