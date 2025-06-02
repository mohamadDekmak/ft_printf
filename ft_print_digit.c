/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdekmak <mdekmak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 20:50:15 by mdekmak           #+#    #+#             */
/*   Updated: 2025/05/28 20:50:15 by mdekmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_digit(int n)
{
	int		count;
	char	*num_str;

	ft_putnbr_fd(n, 1);
	num_str = ft_itoa(n);
	count = ft_strlen(num_str);
	free(num_str);
	return (count);
}

