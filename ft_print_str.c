/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdekmak <mdekmak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 16:15:34 by mdekmak           #+#    #+#             */
/*   Updated: 2025/06/07 16:15:34 by mdekmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *s)
{
	int	count;

	count = 0;
	if (s)
	{
		ft_putstr_fd(s, 1);
		count = ft_strlen(s);
		return (count);
	}
	ft_putstr_fd("(null)", 1);
	return (6);
}
