# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/08/13 17:36:56 by ael-hana          #+#    #+#              #
#    Updated: 2014/08/14 15:12:07 by ael-hana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c main.c
	gcc main.o
	cp a.out $(NAME)

clean:
	rm -f main.o a.out

fclean:
	rm -f main.o a.out $(NAME)
