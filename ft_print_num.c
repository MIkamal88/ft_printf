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

void	ft_print_num(int n)
{
	if (n == -2147483648)
		ft_print_str("-2147483648");
	else if (n < 0)
	{
		ft_print_char('-');
		ft_print_num(-n);
	}
	else if (n >= 10)
	{
		ft_print_num(n / 10);
		ft_print_char(n % 10 + '0');
	}
	else
	{
		if (n > 9)
			ft_print_num(n / 10);
		ft_print_char(n + '0');
	}
}

void	ft_print_unsig_int(unsigned int n)
{
	if (n >= 10)
		ft_print_unsig_int(n / 10);
	ft_print_char(n % 10 + '0');
}

// void	ft_print_ptr()
// {

// }
