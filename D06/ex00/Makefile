#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcarmet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/24 13:08:23 by tcarmet           #+#    #+#              #
#    Updated: 2015/09/24 13:08:28 by tcarmet          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	= convert

SRC		= main.cpp

OBJ		= $(SRC:.cpp=.o)

FLAG	= -Wall -Werror -Wextra -Wno-unused

all:$(NAME)

$(NAME):
	g++ $(FLAG) -c $(SRC)
	g++ -o $(NAME) $(FLAG) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

