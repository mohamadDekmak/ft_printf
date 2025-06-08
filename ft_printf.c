/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdekmak <mdekmak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 15:30:03 by mdekmak           #+#    #+#             */
/*   Updated: 2025/06/07 15:30:03 by mdekmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_format(char p, va_list args)
{
	if (!p)
		return (0);
	if (p == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (p == '%')
		return (ft_print_char('%'));
	else if (p == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (p == 'd' || p == 'i')
		return (ft_print_digit(va_arg(args, int)));
	else if (p == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (p == 'x' || p == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), p));
	else if (p == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	else
	{
		ft_putchar_fd('%', 1);
		ft_putchar_fd(p, 1);
		return (2);
	}
}

static int	helper(const char *p, va_list args)
{
	int	count;

	count = 0;
	while (*p)
	{
		if (*p == '%')
		{
			p++;
			if (!p)
				break ;
			count += handle_format(*p, args);
		}
		else
		{
			ft_putchar_fd(*p, 1);
			count++;
		}
		p++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			count;
	const char	*p;

	if (!format)
		return (-1);
	p = format;
	va_start(args, format);
	count = helper(p, args);
	va_end(args);
	return (count);
}
