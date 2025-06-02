/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdekmak <mdekmak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 20:50:15 by mdekmak           #+#    #+#             */
/*   Updated: 2025/05/28 20:50:15 by mdekmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_print_digit(va_arg(args, int)));
	else if (specifier == '%')
		return (ft_print_percent());
	else
	{
		ft_putchar_fd('%', 1);
		ft_putchar_fd(specifier, 1);
		return (2);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	const char	*ptr;

	count = 0;
	ptr = format;
	if (!format)
		return (-1);
	va_start(args, format);
	while (*ptr)
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr)
				count += handle_format(*ptr, args);
			else
				break ;
		}
		else
		{
			ft_putchar_fd(*ptr, 1);
			count++;
		}
		ptr++;
	}
	va_end(args);
	return (count);
}

