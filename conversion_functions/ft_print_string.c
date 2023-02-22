/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:41:44 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/22 23:05:09 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_cf.h"

int	ft_print_string(va_list ap)
{
	char	*str;
	int		count;

	count = 0;
	if (ap)
		str = va_arg(ap, char *);
	if (str)
	{
		ft_putstr_fd(str, 1);
		count = ft_strlen(str);
	}
	else
		ft_putstr_fd("0");
	return (count);
}
