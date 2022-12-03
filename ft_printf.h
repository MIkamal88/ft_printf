/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 14:54:17 by mshehata          #+#    #+#             */
/*   Updated: 2022/11/29 15:31:01 by mshehata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdio.h> // TO BE REMOVED DURING CHECK

int	ft_print_char(char c);
int	ft_print_str(char *s);
int	ft_print_num(int n);
int	ft_print_unsig_int(unsigned int n);
int	ft_print_hex_lc(int n);
int	ft_print_hex_uc(int n);
int	ft_print_ptr(unsigned long int n);
int	ft_printf_checker(char c, va_list *args);
int	ft_printf(const char *str, ...);

#endif
