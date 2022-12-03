/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:05:00 by mshehata          #+#    #+#             */
/*   Updated: 2022/12/03 13:43:05 by mshehata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_checker(char c, va_list *args)
{
	int	len;

	len = 0;
	if (c == 's')
		len += ft_print_str(va_arg(*args, char *));
	else if (c == 'c')
		len += ft_print_char(va_arg(*args, int));
	else if (c == 'd' || c == 'i')
		len += ft_print_num(va_arg(*args, int));
	else if (c == 'u')
		len += ft_print_unsig_int(va_arg(*args, unsigned int));
	else if (c == 'x')
		len += ft_print_hex_lc(va_arg(*args, unsigned int));
	else if (c == 'X')
		len += ft_print_hex_uc(va_arg(*args, unsigned int));
	else if (c == 'p')
	{
		write(1, "0x", 2);
		len += 2;
		len += ft_print_ptr(va_arg(*args, size_t));
	}
	else if (c == '%')
		len += ft_print_char('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	len = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_printf_checker(str[i], &args);
			i++;
		}
		else
		{
			len += ft_print_char(str[i]);
			i++;
		}
	}
	va_end(args);
	return (len);
}

// int	main(void)
// {
// 	int	y = ft_printf(" %x \n", __LONG_MAX__);
// 	int	z = printf(" %x ", __LONG_MAX__);
// }
