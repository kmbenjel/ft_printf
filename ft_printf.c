/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 00:48:45 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/18 18:21:52 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_isspec(char c)
{
	if (ft_strchr("cspdiuxX%", c))
		return (1);
	return (0);
}

int	ft_invalid_spec(char c)
{
	char	*message;

	message = "Error: Invalid conversion specifier : '";
	ft_putstr_fd(message, 1);
	ft_putchar_fd(c, 1);
	ft_putstr_fd("'", 1);
}

int	ft_convert(char spec)
{
	if (spec == 'c')
		ft_print_character();
	if (spec == 's')
		ft_print_string();
	if (spec == 'p')
		ft_print_pointer();
	if (spec == 'd' || spec == 'i')
		ft_print_decimal();
	if (spec == 'u')
		ft_print_unsigned();
	if (spec == 'x')
		ft_print_hexadecimal_lowercase();
	if (spec == 'X')
		ft_print_hexadecimal_uppercase();
	if (spec == '%')
		ft_print_percent();
}

int	ft_printf(const char *format, ...)
{
	int		output_length;
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
			if (ft_isspec(*next))
				ft_convert(*next);
			else
				ft_invalid_spec(*next);
		}
		else
		{
			ft_putchar_fd(*i);
			output_length += 1;
		}
	}
	va_end(va_list ap);
	return (output_length);
}

// i iterates on every character in the format.
// ap stands for: Argument Pointer.
