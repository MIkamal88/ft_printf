/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:50:18 by mshehata          #+#    #+#             */
/*   Updated: 2022/11/29 13:38:26 by mshehata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define BASE1 "0123456789ABCDEF"
#define BASE "0123456789abcdef"

int	ft_print_num(int n)
{
	int	i;

	i = 1;
	if (n == -2147483648)
	{
		ft_print_str("-2147483648");
		i = 11;
	}
	else if (n < 0)
	{
		ft_print_char('-');
		i += ft_print_num(-n);
	}
	else if (n >= 10)
	{
		i += ft_print_num(n / 10);
		ft_print_char(n % 10 + '0');
	}
	else
		ft_print_char(n + '0');
	return (i);
}

int	ft_print_unsig_int(unsigned int n)
{
	int	i;

	i = 1;
	if (n >= 10)
		i += ft_print_unsig_int(n / 10);
	ft_print_char(n % 10 + '0');
	return (i);
}

int	ft_print_hex_lc(int n)
{
	int	i;

	i = 1;
	if (n >= 16)
	{
		i += ft_print_hex_lc(n / 16);
		ft_print_hex_lc(n % 16);
	}
	else
		ft_print_char(BASE[n]);
	return (i);
}

int	ft_print_hex_uc(int n)
{
	int	i;

	i = 1;
	if (n >= 16)
	{
		i += ft_print_hex_uc(n / 16);
		ft_print_hex_uc(n % 16);
	}
	else
		ft_print_char(BASE1[n]);
	return (i);
}

int	ft_print_ptr(unsigned long int n)
{
	int	i;

	i = 1;
	if (n >= 16)
	{
		i += ft_print_ptr(n / 16);
		ft_print_ptr(n % 16);
	}
	else
		ft_print_char(BASE[n]);
	return (i);
}
