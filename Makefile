# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 12:11:18 by mshehata          #+#    #+#              #
#    Updated: 2022/11/28 12:11:18 by mshehata         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES = ft_printf.c ft_print_chars.c ft_print_num.c\

OFILES = $(Files:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror -c

NAME = $(OUTPUT)

RM = rm -f

all : $(NAME)

$(NAME):	$(OFILES)
					ar rcs $(NAME) $(OFILES)

clean:
	$(RM) $(OFILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
