/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal_lowercase.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:41:12 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/20 11:44:20 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_cf.h"

static char	*ft_reverse_string(const char *str)
{
	char	*result;
}

// Digits for the hexadecimal representation will be collected from the rigth to the left using the remainders of the division by 16,
//	so we will need to reverse that order,
//	so I created FT_REVERSE_STRING for that purpose.

int	ft_print_hexadecimal_lowercase(va_list ap)
{
	int		intarg;
	char	*hex;

	hex = strjoin("x0");
	intarg = va_arg(ap, int);
	while (intarg)
	{
	}
}
