/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 00:48:45 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/17 10:16:16 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	isspec(char c)
{
	if (ft_strchr("cspdiuxX%", c))
		return (1);
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	char	*i;

	i = (char *)format;
	va_start(va_list ap, format);
	while (*i)
	{
		if (*i == '%')
		{
			if (isspec(*next))
				ft_convert(va_arg(va_list, ft_type))
		}
		i++;
	}
	va_end(va_list ap);
	return (0);
}

// i iterates on every character in the format.
// ap stands for: Argument Pointer.
