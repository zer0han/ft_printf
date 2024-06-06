/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdalal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:25:56 by rdalal            #+#    #+#             */
/*   Updated: 2024/06/03 18:26:03 by rdalal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_charprint(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_format(char type, va_list args)
{
	int	print_len;

	print_len = 0;
	if (type == '%')
		return (write (2, "%", 1));
	else if (type == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		return (1);
	}
	else if (type == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (type == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	else if (type == 'd' || type == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (type == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (type == 'x')
		return (ft_print_hexa(va_arg(args, ssize_t), false));
	else if (type == 'X')
		return (ft_print_hexa(va_arg(args, ssize_t), true));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		len;

	i = 0;
	len = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_format(args, str[i + 1]);
			i++;
		}
		else
			len += ft_charprint(str[i]);
		i++;
	}
	va_end(args);
	return (len);
	
}