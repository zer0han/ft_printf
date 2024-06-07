/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdalal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:48:48 by rdalal            #+#    #+#             */
/*   Updated: 2024/06/03 17:48:49 by rdalal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);

int	ft_printf(const char *str, ...);

int	ft_print_str(char *str);

int	ft_print_int(int n);

int	ft_print_unsigned(unsigned int n);

int	ft_print_ptr(void *ptr);

int	ft_print_hexa(unsigned int nbr, int uppercase);

#endif
