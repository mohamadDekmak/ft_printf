/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdekmak <mdekmak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 16:48:49 by mdekmak           #+#    #+#             */
/*   Updated: 2025/06/07 16:48:49 by mdekmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, char p)
{
	char	*digits;
	int		count;

	if (p == 'x')
		digits = "0123456789abcdef";
	else if (p == 'X')
		digits = "0123456789ABCDEF";
	else
		return (0);
	count = 0;
	if (n >= 16)
		count += ft_print_hex(n / 16, p);
	ft_putchar_fd(digits[n % 16], 1);
	return (count + 1);
}
