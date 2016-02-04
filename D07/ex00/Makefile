#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcarmet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/25 16:18:28 by tcarmet           #+#    #+#              #
#    Updated: 2015/09/25 16:20:23 by tcarmet          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = whatever

SRC = whatever.cpp

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