/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal_lowercase.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:41:12 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/20 10:13:27 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_cf.h"

static char	*ft_reverse_string(const char *str)
{
}

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
