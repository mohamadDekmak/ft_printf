/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdekmak <mdekmak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 16:19:30 by mdekmak           #+#    #+#             */
/*   Updated: 2025/06/07 16:19:30 by mdekmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_digit(int d)
{
	int		count;
	char	*num_str;

	ft_putnbr_fd(d, 1);
	num_str = ft_itoa(d);
	count = ft_strlen(num_str);
	free(num_str);
	return (count);
}
