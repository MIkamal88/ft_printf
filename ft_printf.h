/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 14:54:17 by mshehata          #+#    #+#             */
/*   Updated: 2022/12/03 13:43:12 by mshehata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

int	ft_print_char(char c);
int	ft_print_str(char *s);
int	ft_print_num(int n);
int	ft_print_unsig_int(unsigned int n);
int	ft_print_hex_lc(unsigned int n);
int	ft_print_hex_uc(unsigned int n);
int	ft_print_ptr(size_t n);
int	ft_printf_checker(char c, va_list *args);
int	ft_printf(const char *str, ...);

#endif
