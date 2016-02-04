#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcarmet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/24 15:42:20 by tcarmet           #+#    #+#              #
#    Updated: 2015/09/24 15:42:21 by tcarmet          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = serialize

SRC = serialize.cpp

OBJ = $(SRC:.cpp=.o)

FLAG = -Wall -Werror -Wextra -Wno-unused

all:$(NAME)

$(NAME):
	g++ $(FLAG) -c $(SRC)
	g++ $(FLAG) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
