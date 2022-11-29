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

size_t	ft_strlen(const char *str);
int		ft_print_char(char c);
int		ft_print_str(char *s);
void	ft_print_num(int n);
void	ft_print_unsig_int(unsigned int n);

#endif
