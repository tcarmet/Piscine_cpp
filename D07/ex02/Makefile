#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcarmet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/28 14:30:47 by tcarmet           #+#    #+#              #
#    Updated: 2015/09/28 14:30:47 by tcarmet          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME =  Array

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

FLAG = -Wall -Werror -Wextra 

all:$(NAME)

$(NAME):
	g++ $(FLAG) -c $(SRC)
	g++ $(FLAG) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
