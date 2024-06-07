/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdalal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:03:21 by rdalal            #+#    #+#             */
/*   Updated: 2024/06/06 15:03:26 by rdalal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	ft_printstr(char *str)
{
	if (!str)
	{
		ft_pustr("(null)");
		return (0);
	}
	ft_pustr(str);
	return ((size_t)ft_strlen(str));
}

int	ft_printnbr(int n)
{
	int		len;
	char	*nbr;

	nbr = ft_itoa(n);
	if (!nbr)
		return (0);
	len = ft_printstr(nbr);
	free (nbr);
	return (len);
}

int	ft_percent_print(void)
{
	write (1, "%", 1);
	return (1);
}
