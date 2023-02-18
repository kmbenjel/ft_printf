/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_character.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:40:59 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/18 14:02:08 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../printf.h"

int	ft_print_character(void)
{
	character = va_arg(ap, char);
	ft_putchar_fd(character, char);
}

//spec = conversion specifier
