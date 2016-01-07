# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qfremeau <qfremeau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/07 17:16:57 by qfremeau          #+#    #+#              #
#    Updated: 2016/01/07 17:24:53 by qfremeau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = norm-debug
SRC = main.c read_file.c
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror

all:
	clang $(FLAGS) -c $(SRC)
	clang -o $(NAME) $(FLAGS) $(OBJ)

$(NAME): all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all