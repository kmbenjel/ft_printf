/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:41:37 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/20 20:13:27 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_cf.h"

int	ft_print_percent(va_list ap)
{
	char	percent;

	percent = va_arg(ap, int);
	ft_putchar_fd(percent, 1);
	return (1);
}
