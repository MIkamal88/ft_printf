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

void	ft_printf(char const *str, ...)
{

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
