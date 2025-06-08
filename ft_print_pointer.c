/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdekmak <mdekmak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 16:49:04 by mdekmak           #+#    #+#             */
/*   Updated: 2025/06/07 16:49:04 by mdekmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_hex_help(unsigned long n)
{
	char	*digits;
	int		count;

	digits = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_print_hex_help(n / 16);
	ft_putchar_fd(digits[n % 16], 1);
	return (count + 1);
}

int	ft_print_pointer(void *p)
{
	int				len;
	unsigned long	add;

	if (!p)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ft_putstr_fd("0x", 1);
	len = 2;
	add = (unsigned long)p;
	len += ft_print_hex_help(add);
	return (len);
}
