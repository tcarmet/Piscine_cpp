#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcarmet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/25 17:14:39 by tcarmet           #+#    #+#              #
#    Updated: 2015/09/25 17:16:31 by tcarmet          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = iter

SRC = iter.cpp

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