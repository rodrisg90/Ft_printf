# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 11:33:22 by rodsanch          #+#    #+#              #
#    Updated: 2022/05/17 15:30:47 by rodsanch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a
CC				=	clang
CFLAGS			=	-Wall -Werror -Wextra
RM				= 	/bin/rm -f

SRCS			=	ft_printf.c	ft_print_char.c	ft_print_hexa.c	ft_print_number.c ft_print_string.c	ft_print_unumber.c

OBJS			=	$(SRCS:.c=.o)

.c.o:
			@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			@ar -rcs $(NAME) $(OBJS)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

out: re
	gcc $(CFLAGS) libftprintf.a -o a.out

.PHONY:		all clean fclean re bonus out
