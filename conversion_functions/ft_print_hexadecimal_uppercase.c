/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal_uppercase.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:41:22 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/20 20:12:16 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_cf.h"

int	ft_print_hexadecimal_uppercase(va_list ap)
{
	int		uiarg;
	int		count;
	char	*hex;

	uiarg = va_arg(ap, int);
	hex = ft_strjoin("0X", ft_uitoh(uiarg));
	ft_putstr_fd(hex, 1);
	count = ft_strlen(hex);
	return (count);
}

//  FT_UITOH stands for: Unsigned Integer To Hexadecimal.
//  UIARG stands for: Unsigned Integer Argument.
