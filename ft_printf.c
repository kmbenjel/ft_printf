/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 00:48:45 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/18 11:56:15 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_isspec(char c)
{
	if (ft_strchr("cspdiuxX%", c))
		return (1);
	else
		return (0);
}

int	ft_invalid_spec(char c)
{
	char	*message;

	message = "Error: Invalid conversion specifier : '";
	ft_putstr(message);
	ft_putchar(c);
	ft_putstr("'");
}

int	ft_convert(char *spec)
{
	write(1, "a", 1);
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
				ft_convert(next);
			else
				ft_invalid_spec(next);
		}
		else
			ft_putchar(*i);
		i++;
	}
	va_end(va_list ap);
	return (0);
}

// i iterates on every character in the format.
// ap stands for: Argument Pointer.
