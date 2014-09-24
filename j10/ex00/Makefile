# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/08/11 17:39:13 by ael-hana          #+#    #+#              #
#    Updated: 2014/08/12 00:36:35 by ael-hana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c\
		srcs/ft_putstr.c\
		srcs/ft_strcmp.c\
		srcs/ft_strlen.c\
		srcs/ft_swap.c

NAME = libft.a

INCLUDE = includes/ft.h

OBJET = ft_putchar.o\
		ft_putstr.o\
		ft_strcmp.o\
		ft_strlen.o\
		ft_swap.o

FLAGS = -Wall -Wextra -Werror -include $(INCLUDE) -c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJET)
	ranlib $(NAME)

clean:
	rm -f $(OBJET)

fclean:
	rm -f $(NAME) $(OBJET)

re: fclean all
