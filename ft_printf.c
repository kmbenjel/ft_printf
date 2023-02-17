/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 00:48:45 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/17 10:54:06 by kbenjell         ###   ########.fr       */
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

static int	invalid_spec(char c)
{
	char	*message;

	message = "Error: Invalid conversion specifier : '";
	ft_putstr_fd(message, 1);
	ft_putchar_fd(c, 1);
	ft_putstr_fd("'", 1);
}

int	ft_printf(const char *format, ...)
{
	char	*i;
	char	*next;
	va_list	ap;

	i = (char *)format;
	va_start(ap, format);
	while (*i)
	{
		next = i + 1;
		if (*i == '%')
		{
			if (isspec(*next))
				convert(next);
			else
				invalid_spec(*next);
		}
		i++;
	}
	va_end(va_list ap);
	return (0);
}

// i iterates on every character in the format.
// ap stands for: Argument Pointer.
