#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcarmet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/24 15:47:43 by tcarmet           #+#    #+#              #
#    Updated: 2015/09/24 15:47:44 by tcarmet          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = Identify

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

FLAG = -Wall -Werror -Wno-unused

all:$(NAME)

$(NAME):
	g++ $(FLAG) -c $(SRC)
	g++ $(FLAG) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
