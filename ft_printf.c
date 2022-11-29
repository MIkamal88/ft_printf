/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:05:00 by mshehata          #+#    #+#             */
/*   Updated: 2022/11/27 16:54:16 by mshehata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c)
{
	write(1, &c, 1);
}

void	ft_printf_checker(char c)
{
	if (c == 's')
		ft_print_string_PH();
	else if (c == 'c')
		ft_putchar_PH();
	else if (c == 'p')
		ft_print_ptr_PH();
		//The void * pointer argument has to be printed in Hexadecimal format.
	else if (c == 'd' || c == 'i')
		ft_print_num_PH();
		//Decimal base 10
	else if (c == 'u')
		ft_print_unsigned_int_PH();
	else if (c == 'x')
		ft_print_hex_lw_PH();
		//lower case hexadecimal
	else if (c == 'X')
		ft_print_hex_uc_PH();
		//Upper case hexadecimal
	else if (c == '%')
		ft_putchar_fd('%');
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_printf_checker(str[i]);
			i++;
		}
		else
		{
			ft_putchar_fd(str[i]);
			i++;
		}
	}
	va_end(args);
	return (i);
	//?? Function should return the number of characters printed excluding NULL
}

// int	max(int num_args, ...)
// {
// 	va_list	args;
// 	int		max;

// 	max = 0;
// 	va_start(args, num_args);
// 	for (int i = 0; i < num_args; i++)
// 	{
// 		int	x = va_arg(args, int);
// 		if (i == 0)
// 			max = x;
// 		else if (x > max)
// 			max = x;
// 	}
// 	va_end(args);
// 	return (max);
// }

// int	main(void)
// {
// 	printf("%d\n", max(4, 10, 16, 5465, 998756));
// }
