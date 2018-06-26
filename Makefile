# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrepak <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/26 10:48:56 by nrepak            #+#    #+#              #
#    Updated: 2018/06/26 10:48:58 by nrepak           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c file_check.c 

NAME = asm

OBJ = $(SRCS:.c=.o)

LIB = mylib.a

FLAGS = -Wall -Wextra -Werror

HEADER = ./asm.h

all: $(NAME)

$(NAME):$(OBJ)
	@ cd ./mylib && make && mv $(LIB) ..
	@ gcc $(FLAGS) $(OBJ) $(LIB) -o $(NAME)

%.o: %.c $(HEADER)
	@ gcc $(FLAGS) -c $<

clean:
	@ /bin/rm -rf $(OBJ)
	@ cd ./mylib && make clean

fclean: clean
	@ /bin/rm -f $(NAME)
	@ /bin/rm -f $(LIB)
	@ /bin/rm -f mylib/$(LIB)
	@ cd ./mylib && make fclean

re: fclean all