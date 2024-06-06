/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdalal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:03:41 by rdalal            #+#    #+#             */
/*   Updated: 2024/06/06 15:03:43 by rdalal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_nbr_len(unsigned int nbr)
{
	int	len;

	len = 0;
	while (nbr != 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*nbr;
	int		len;

	len = ft_nbr_len(n);
	nbr = (char *)malloc(sizeof(char) * (len + 1));
	if (!nbr)
		return (0);
	nbr[len] = '\0';
	while (n != 0)
	{
		nbr[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (nbr);
}

int	ft_print_unsigned(unsigned int n)
{
	char	*nbr;
	int		prt_len;

	prt_len = 0;
	if (n == 0)
		prt_len += write (1, "0", 1);
	else
	{
		nbr = ft_uitoa(n);
		prt_len += ft_printstr(nbr);
		free (nbr);
	}
	return (prt_len);
}
