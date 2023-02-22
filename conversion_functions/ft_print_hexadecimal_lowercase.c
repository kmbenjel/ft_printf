/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal_lowercase.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:41:12 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/22 17:22:54 by kbenjell         ###   ########.fr       */
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
	while (i < strlen)
	{
		result[i] = str[strlen - i - 1];
		i++;
	}
	result[i] = '\0';
	return (result);
}

//  Digits for the hexadecimal representation will be collected from the right
//  to the left using the remainders of the division by 16,
//  so we will need to reverse that order,
//  for that purpose FT_REVERSE_STRING is there.

char	*ft_uitoh(unsigned int uiarg)
{
	char	*hexstr;
	char	*free_helper;
	int		remainder;
	int		i;

	free_helper = hexstr;
	i = 0;
	remainder = 0;
	hexstr = malloc(9);
	while (uiarg != 0)
	{
		remainder = uiarg % 16;
		if (remainder < 10)
			hexstr[i++] = remainder + '0';
		else
			hexstr[i++] = remainder + 'a' - 10;
		uiarg /= 16;
	}
	hexstr[i] = '\0';
	return (ft_reverse_string(hexstr));
}

//  FT_UITOH stands for: Unsigned Integer To Hexadecimal.
//  UIARG stands for: Unsigned Integer Argument.
//  The previous functions are not static, as they will be also used for
//  FT_PRINT_HEXDECIMAL_UPPERCASE.
//  Allocated 9 bytes considering the max hexadecimal forms of unsigned
//  ints, plus the '\0'

int	ft_print_hexadecimal_lowercase(va_list ap)
{
	unsigned int	uiarg;
	int				count;
	char			*hexstr;

	uiarg = va_arg(ap, unsigned int);
	hexstr = ft_strjoin("0x", ft_uitoh(uiarg));
	ft_putstr_fd(hexstr, 1);
	count = ft_strlen(hexstr);
	free(hexstr);
	return (count);
}

// HEXSTR stands for: Hexadecimal String (A hexadecimal in char * format).
