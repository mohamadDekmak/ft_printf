/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdekmak <mdekmak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 08:32:48 by mdekmak           #+#    #+#             */
/*   Updated: 2025/06/03 08:32:48 by mdekmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, char specifier)
{
    char	*hex_digits;
    int		count;

    if (specifier == 'x')
        hex_digits = "0123456789abcdef";
    else if (specifier == 'X')
        hex_digits = "0123456789ABCDEF";
    else
        return (0);
    count = 0;
    if (n >= 16)
        count += ft_print_hex(n / 16, specifier);
    ft_putchar_fd(hex_digits[n % 16], 1);
    return (count + 1);
}