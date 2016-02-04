#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcarmet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/09 17:52:53 by tcarmet           #+#    #+#              #
#    Updated: 2015/09/09 17:55:15 by tcarmet          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = cato9tails

SRC = main.cpp

FLAG = -Wall -Werror -Wextra

OBJ = $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):
	g++ $(FLAG) -c $(SRC)
	g++ $(FLAG) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all