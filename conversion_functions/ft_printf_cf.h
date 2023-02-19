/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_cf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:26:34 by kbenjell          #+#    #+#             */
/*   Updated: 2023/02/19 18:26:08 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_CF_H
# define FT_PRINTF_CF_H
# include "../libft/libft.h"
# include <stdarg.h>

int	ft_print_character(va_list ap);
int	ft_print_decimal(void);
int	ft_print_hexadecimal_lowercase(void);
int	ft_print_hexadecimal_uppercase(void);
int	ft_print_percent(void);
int	ft_print_pointer(void);
int	ft_print_string(void);
int	ft_print_unsigned(void);

#endif
