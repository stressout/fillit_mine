# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkeel <mkeel@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/08 22:00:04 by mkeel             #+#    #+#              #
#    Updated: 2019/08/09 12:08:18 by mkeel            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
LIBFT = ./libft/
HEADER = /project_files/fillit.h
SRC = ./project_files/*.c
OBJ = ./project_files/*.o

all: $(NAME)

$(NAME):
	make -C $(LIBFT)
	gcc -o $(NAME) $(SRC) -I $(HEADER) -L. libft/libft.a
clean: 
	/bin/rm -f $(OBJ)
	make -C $(LIBFT) clean

fclean: clean
	/bin/rm -f $(NAME)
	make -C $(LIBFT) fclean

re: fclean all