# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/10 09:38:05 by isainz-r          #+#    #+#              #
#    Updated: 2024/12/10 09:38:07 by isainz-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = dream_job

CC = c++

CFLAGS = -Wall -Werror -Wextra #-std=c++98

SRCS = tests.cpp Account.cpp

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