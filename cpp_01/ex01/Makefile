# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/11 12:28:51 by isainz-r          #+#    #+#              #
#    Updated: 2024/12/11 12:28:53 by isainz-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie_horde

CC = c++

CFLAGS = -Wall -Werror -Wextra #-std=c++98

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all

