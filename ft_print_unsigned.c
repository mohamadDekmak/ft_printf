/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsinged.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdekmak <mdekmak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 22:41:34 by mdekmak           #+#    #+#             */
/*   Updated: 2025/06/07 22:41:34 by mdekmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int d)
{
	char			str[11];
	int				count;
	int				i;

	if (d == 0)
		return (ft_print_char('0'));
	i = 0;
	count = 0;
	while (d > 0)
	{
		str[i] = (d % 10) + '0';
		d /= 10;
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		count += ft_print_char(str[i]);
		i--;
	}
	return (count);
}
