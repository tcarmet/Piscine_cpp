#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/26 18:26:53 by tcarmet           #+#    #+#              #
#    Updated: 2015/08/27 21:31:37 by tcarmet          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = phonebook

SRC = phonebook.cpp ContactClass.cpp misc.cpp

FLAG = -Wall -Werror -Wextra 

OBJ = $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):
	g++ $(FLAG) -c $(SRC)
	g++ $(FLAG) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
