/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdekmak <mdekmak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 08:33:49 by mdekmak           #+#    #+#             */
/*   Updated: 2025/06/05 11:09:14 by mdekmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_pointer_rec(unsigned long address)
{
	int		count;
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	count = 0;
	if (address >= 16)
		count += ft_print_pointer_rec(address / 16);
	ft_putchar_fd(hex_digits[address % 16], 1);
	return (count + 1);
}

int	ft_print_pointer(void *ptr)
{
	int				count;
	unsigned long	address;

	if (!ptr)
		return (ft_print_str(NULL));
	address = (unsigned long)ptr;
	count = 0;
	count += ft_print_str("0x");
	if (address == 0)
	{
		ft_putchar_fd('0', 1);
		return (count + 1);
	}
	count += ft_print_pointer_rec(address);
	return (count);
}
