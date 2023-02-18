/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_character.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:40:59 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/18 17:42:24 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../printf.h"

int	ft_print_character(void)
{
	character = va_arg(ap, char);
	ft_putchar_fd(character, 1);
	return (1);
}

//spec = conversion specifier
