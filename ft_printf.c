/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:05:00 by mshehata          #+#    #+#             */
/*   Updated: 2022/11/29 15:58:48 by mshehata         ###   ########.fr       */
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
		ft_print_num(va_arg(*args, int));
	else if (c == 'u')
		ft_print_unsig_int(va_arg(*args, unsigned int));
	// else if (c == 'x')
	// 	ft_print_hex_lw_PH();
	// else if (c == 'X')
	// 	ft_print_hex_uc_PH();
	// else if (c == 'p')
	// 	ft_print_ptr(va_arg(*args, char *));
	else if (c == '%')
	{
		ft_print_char('%');
		len++;
	}
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
	//?? Function should return the number of characters printed excluding NULL
}

int	main()
{
	// char str[] = "Test";

	int y = ft_printf("%d %d lol %i %i %u\n", 1, 2, 3, 4, 5);
	int z = printf("%d %d lol %i %i %u\n", 1, 2, 3, 4, 5);
	//printf("%s suck it %c\n%d %d lololol %i %i %u\n", "abc", 'b', 1, 2, 3, 4789456123000, -4789456123000);
	printf("%d\n%d", y, z);
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
