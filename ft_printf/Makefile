# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dberreby <dberreby@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 11:38:53 by dberreby          #+#    #+#              #
#    Updated: 2022/12/02 15:51:01 by dberreby         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC				= char.c ft_printf.c hexa.c nbr.c pointeur.c
					
OBJ 			= $(SRC:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror 

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJ)
					ar rcs $(NAME) $(OBJ)

clean:
				$(RM) $(OBJ) $(BONUS_OBJ)

fclean:			clean
					$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re

