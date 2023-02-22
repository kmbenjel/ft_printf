/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:41:46 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/22 17:37:23 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_cf.h"

static char	*ft_uitoa(unsigned int uiarg)
{
	char	*str;
	char	*free_helper;
	int		remainder;
	int		i;

	remainder = 0;
	i = 0;
	str = malloc(9);
	if (!str)
		return (NULL);
	free_helper = str;
	while (uiarg)
	{
		remainder = uiarg % 10;
		str[i++] = remainder + '0';
		uiarg /= 10;
	}
	str[i] = '\0';
	str = ft_reverse_string(str);
	free(free_helper);
	return (str);
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
	free(uistr);
	return (count);
}

//  UITOA stands for: Unsigned Integer to ASCII.
//  UIARG stands for: Unsigned Integer Argument.
//  UISTR stands for: Unsigned Integer String.
