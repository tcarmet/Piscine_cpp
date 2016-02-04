#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcarmet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/08 13:59:34 by tcarmet           #+#    #+#              #
#    Updated: 2015/09/08 14:11:44 by tcarmet          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = replace

SRC = main.cpp File.class.cpp

FLAG = -Wall -Werror -Wextra

SRCDIR = ./srcs/

INCDIR = ./includes/

OBJDIR = ./objs/

OBJ = $(SRC:.cpp=.o)

SRCS = $(addprefix $(SRCDIR), $(SRC))

OBJS = $(addprefix $(OBJDIR), $(OBJ))


all:$(NAME)

$(NAME):
	g++ $(FLAG) -c $(SRCS) -I $(INCDIR)
	mkdir -p $(OBJDIR)
	mv $(OBJ) $(OBJDIR)
	g++ $(FLAG) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
