# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/08/14 22:30:49 by ael-hana          #+#    #+#              #
#    Updated: 2014/08/14 22:31:24 by ael-hana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c main.c func.c
	gcc $(FLAGS) main.o func.o -o $(NAME)

clean:
	rm -f main.o func.o

fclean: clean
	rm -f $(NAME)
