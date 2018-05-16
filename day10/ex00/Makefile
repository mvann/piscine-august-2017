# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvann <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 14:14:27 by mvann             #+#    #+#              #
#    Updated: 2017/08/21 15:29:34 by mvann            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMP_FLAGS = -Wall -Wextra -Werror

all:
	gcc $(COMP_FLAGS) -c ./srcs/ft*.c -I ./includes/
	ar rc libft.a ft*.o
	ranlib libft.a

clean:
	rm -f *.o

fclean: clean
	rm -f libft.a

re: fclean
	make
