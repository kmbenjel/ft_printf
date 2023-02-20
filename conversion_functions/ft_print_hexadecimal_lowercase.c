/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal_lowercase.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:41:12 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/20 19:30:45 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_cf.h"

char	*ft_reverse_string(const char *str)
{
	char	*result;
	int		strlen;
	int		i;

	strlen = ft_strlen(str);
	i = -1;
	result = malloc(strlen + 1);
	if (!result)
		return (NULL);
	while (i++ <= strlen)
		result[i] = str[strlen - i - 1];
	return (result);
}

//  Digits for the hexadecimal representation will be collected from the right
//  to the left using the remainders of the division by 16,
//  so we will need to reverse that order,
//  for that purpose FT_REVERSE_STRING is there.

char	*ft_itoh(unsigned int intarg)
{
	char	*hexstr;
	int		remainder;
	int		i;

	i = 0;
	remainder = 0;
	hexstr = malloc(9);
	while (intarg != 0)
	{
		remainder = intarg % 16;
		if (remainder < 10)
			hexstr[i++] = remainder + '0';
		else
			hexstr[i++] = remainder + 'A' - 10;
		intarg /= 16;
	}
	hexstr[i] = '\0';
	return (ft_reverse_string(hexstr));
}

//  FT_ITOH stands for: Integer To Hexadecimal.
//  INTARG stands for: Integer Argument.
//  The previous functions are not static, as they will be also used for
//  FT_PRINT_HEXDECIMAL_UPPERCASE.
//  Allocated 9 bytes respecting the max hexadecimal lengths, plus the '\0'

int	ft_print_hexadecimal_lowercase(va_list ap)
{
	unsigned int	intarg;
	int				count;
	char			*hex;

	intarg = va_arg(ap, unsigned int);
	hex = ft_strjoin("0x", ft_itoh(intarg));
	ft_putstr_fd(hex, 1);
	count = ft_strlen(hex);
	return (count);
}
