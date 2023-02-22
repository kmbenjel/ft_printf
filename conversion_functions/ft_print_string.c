/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:41:44 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/22 23:17:33 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_cf.h"

int	ft_print_string(va_list ap)
{
	char	*str;
	int		count;
	char	*null;

	null = "(null)";
	count = 0;
	str = va_arg(ap, char *);
	if (str)
		count = ft_strlen(str);
	else
	{
		str = null;
		count = ft_strlen(null);
	}
	ft_putstr_fd(str, 1);
	return (count);
}
