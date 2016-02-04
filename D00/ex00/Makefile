#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/24 15:01:11 by tcarmet           #+#    #+#              #
#    Updated: 2015/08/24 15:52:42 by tcarmet          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = megaphone

SRC = megaphone.cpp

FLAG = -Wall -Wextra -Werror

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	g++ $(FLAG) -c $(SRC)
	g++ $(FLAG) $(OBJ) -o $(NAME)
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
