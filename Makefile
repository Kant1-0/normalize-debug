# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qfremeau <qfremeau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/07 17:16:57 by qfremeau          #+#    #+#              #
#    Updated: 2016/01/08 14:01:29 by qfremeau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PATHLIBFT = ../libft/

NAME = norm-debug
SRC = main.c read_file.c
OBJ = $(SRC:.c=.o)
LIB= lib/libft.a
FLAGS = -Wall -Wextra -Werror

all:
	cd srcs/ && \
		clang $(FLAGS) -c $(SRC)
	cd srcs/ && \
		clang -o $(NAME) $(FLAGS) $(OBJ) ../$(LIB)
	mv srcs/$(NAME) ./

$(NAME): all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

libs:
	cd $(PATHLIBFT) && \
		make
	cp -f $(PATHLIBFT)libft.a lib/
	cp -f $(PATHLIBFT)libft.h lib/

relibs:
	cd $(PATHLIBFT) && \
		make re
	cp -f $(PATHLIBFT)libft.a lib/
	cp -f $(PATHLIBFT)libft.h lib/

cleanlibs:
	cd $(PATHLIBFT) && \
		make fclean
	rm -f lib/libft.a lib/libft.a
