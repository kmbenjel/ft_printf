/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:41:44 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/20 20:44:54 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_cf.h"

int	ft_print_string(va_list ap)
{
	char	*str;
	int		count;

	str = va_arg(ap, char *);
	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (count);
}
