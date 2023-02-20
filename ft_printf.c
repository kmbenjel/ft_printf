/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 00:48:45 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/20 18:21:21 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_isspec(char c)
{
	if (ft_strchr("cspdiuxX%", c))
		return (1);
	return (0);
}

static void	ft_invalid_spec(char c)
{
	char	*message;

	message = "Error: Invalid conversion specifier : '";
	ft_putstr_fd(message, 1);
	ft_putchar_fd(c, 1);
	ft_putstr_fd("'", 1);
}

static int	ft_convert(char spec, int ol, va_list ap)
{
	/* if (spec == 'c') */
	/* 	ol += ft_print_character(ap); */
	/* if (spec == 's') */
	/* 	ft_print_string(ap); */
	if (spec == 'p')
		ft_print_pointer(ap);
	/* if (spec == 'd' || spec == 'i') */
	/* 	ft_print_decimal(ap); */
	/* if (spec == 'u') */
	/* 	ft_print_unsigned(ap); */
	/* if (spec == 'x') */
	/* 	ft_print_hexadecimal_lowercase(ap); */
	/* if (spec == 'X') */
	/* 	ft_print_hexadecimal_uppercase(ap); */
	/* if (spec == '%') */
	/* 	ft_print_percent(ap); */
	return (ol);
}

int	ft_printf(const char *format, ...)
{
	int		ol;
	char	*i;
	va_list	ap;

	i = (char *)format;
	va_start(ap, format);
	ol = 0;
	while (*i)
	{
		if (*i == '%')
		{
			if (ft_isspec(*(i + 1)))
				ol += ft_convert(*(i + 1), ol, ap);
			else
				ft_invalid_spec(*(i + 1));
			i++;
		}
		else
		{
			ft_putchar_fd(*i, 1);
			ol += 1;
		}
		i++;
	}
	va_end(ap);
	return (ol);
}

// i iterates on every character in the format.
// ap stands for: Argument Pointer.
// ol stands for: Output Length.
