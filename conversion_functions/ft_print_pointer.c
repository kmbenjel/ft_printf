/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:41:41 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/20 17:52:51 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_cf.h"

int	ft_print_pointer(va_list ap)
{
	int		count;
	char	*hex;

	hex = ft_strjoin("0x", va_arg(ap, void *));
	count = ft_strlen(hex);
	return (count);
}
