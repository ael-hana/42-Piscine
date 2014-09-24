# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/08/14 15:00:06 by ael-hana          #+#    #+#              #
#    Updated: 2014/08/14 15:09:22 by ael-hana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

FLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c main.c
	gcc $(FLAGS) main.o -o $(NAME)

clean:
	rm -f main.o

fclean: clean
	rm -f $(NAME)
