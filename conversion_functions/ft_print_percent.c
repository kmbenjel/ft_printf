/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:41:37 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/20 20:08:14 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_cf.h"

char	*ft_ultoh(unsigned long ularg)
{
	char	*hexstr;
	int		remainder;
	int		i;

	i = 0;
	remainder = 0;
	hexstr = malloc(17);
	while (longarg != 0)
	{
		remainder = ularg % 16;
		if (remainder < 10)
			hexstr[i++] = remainder + '0';
		else
			hexstr[i++] = remainder + 'A' - 10;
		intarg /= 16;
	}
	hexstr[i] = '\0';
	return (ft_reverse_string(hexstr));
}

//  FT_ULTOH stands for: Unsigned Long To Hexadecimal.
//  ULARG stands for: Unsigned Long Argument.
//  Allocated 17 bytes considering the max hexadecimal forms of a pointer
//  representation (16 digits), plus the '\0'

#include "ft_printf_cf.h"

int	ft_print_percent(va_list ap)
{
	char	percent;

	percent = va_arg(ap, int);
	ft_putchar_fd(percent, 1);
	return (1);
}
