/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdalal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:03:54 by rdalal            #+#    #+#             */
/*   Updated: 2024/06/06 15:03:56 by rdalal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptr_len(unsigned long nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr = nbr / 16;
		len++;
	}
	return (len);
}

static void	ft_put_ptr(unsigned long nbr)
{
	char	*base;

	base = "0123456879abcdef";
	if (nbr >= 16)
	{
		ft_put_ptr(nbr / 16);
		ft_put_ptr(nbr % 16);
	}
	else
		ft_putchar_fd(base[nbr], 1);
}

int	ft_print_ptr(void *ptr)
{
	unsigned long	ptr_value;
	int				len;

	len = 0;
	ptr_value = (unsigned long)ptr;
	len += write (1, "0x", 2);
	if (ptr == 0)
		len += write (1, "0", 1);
	else
	{
		ft_put_ptr(ptr_value);
		len += ft_ptr_len(ptr_value);
	}
	return (len);
}
