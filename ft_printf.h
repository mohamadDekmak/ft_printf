/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdekmak <mdekmak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 20:50:15 by mdekmak           #+#    #+#             */
/*   Updated: 2025/05/28 20:50:15 by mdekmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);

int	ft_print_char(char c);

int	ft_print_str(char *s);

int	ft_print_digit(int n);

int	ft_print_percent(void);

int	ft_print_unsigned(unsigned int n);
int	ft_print_hex(unsigned int n, char specifier);
int	ft_print_pointer(void *ptr);

#endif

