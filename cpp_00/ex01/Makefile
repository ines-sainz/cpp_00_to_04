# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/02 18:29:01 by isainz-r          #+#    #+#              #
#    Updated: 2024/12/02 18:29:04 by isainz-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phone_book

CC = c++

CFLAGS = -Wall -Werror -Wextra #-std=c++98

SRCS = main.cpp PhoneBook.cpp Contact.cpp

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