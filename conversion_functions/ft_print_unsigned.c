/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:41:46 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/20 21:32:04 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_cf.h"

static char	*uitoa(unsigned int n)

{
	char *str;
	char *p;

	str = malloc(9);
	p = str;
	if (!str)
		return (NULL);
	while (n)
	{
	}
}
