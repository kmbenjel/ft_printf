/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:41:46 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/21 15:41:34 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_cf.h"

static char	*uitoa(unsigned int n)

{
	char *str;
	int remainder = 0;
	int i = 0;

	str = malloc(9);
	if (!str)
		return (NULL);
	while (n)
	{
		remainder = n % 10;
		str[i++] = remainder + '0';
		n /= 10;
	}
	str[i] = '\0';
	return (ft_reverse_string(str));
}

//  UITOA stands for: Unsigned Integer to ASCII.
