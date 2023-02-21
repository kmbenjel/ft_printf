/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:41:46 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/21 16:21:25 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_cf.h"

static char	*ft_uitoa(unsigned int uiarg)

{
	char *str;
	int remainder = 0;
	int i = 0;

	str = malloc(9);
	if (!str)
		return (NULL);
	while (uiarg)
	{
		remainder = uiarg % 10;
		str[i++] = remainder + '0';
		uiarg /= 10;
	}
	str[i] = '\0';
	return (ft_reverse_string(str));
}
int	ft_print_unsigned(va_list ap)
{
	int				count;
	unsigned int	uiarg;
	char			*uistr;

	count = 0;
	uiarg = va_arg(ap, unsigned int);
	uistr = ft_uitoa(uiarg);
	count = ft_strlen(uistr);
	return (count);
}

//  UITOA stands for: Unsigned Integer to ASCII.
//  UIARG stands for: Unsigned Integer Argument.
//  UISTR stands for: Unsigned Integer String (A char* representing an unsigned int).
