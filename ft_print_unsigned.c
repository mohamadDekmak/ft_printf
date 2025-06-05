/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdekmak <mdekmak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 08:31:41 by mdekmak           #+#    #+#             */
/*   Updated: 2025/06/05 11:09:31 by mdekmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	int		count;
	char	buffer[11];
	int		i;

	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	i = 0;
	count = 0;
	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (--i >= 0)
	{
		ft_putchar_fd(buffer[i], 1);
		count++;
	}
	return (count);
}
