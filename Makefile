# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/01 16:17:27 by emkalkan          #+#    #+#              #
#    Updated: 2024/01/01 16:17:27 by emkalkan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = server.c client.c
OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99 -D_POSIX_C_SOURCE=200809L

all: libft server client

server: server.o libft/libft.a
	$(CC) -o $@ $^ -Llibft -lft

client: client.o libft/libft.a
	$(CC) -o $@ $^ -Llibft -lft

%.o: %.c
	$(CC) -c $(CFLAGS) -Ilibft $< -o $@

libft:
	make -C libft

clean:
	rm -f $(OBJECTS)
	make -C libft clean
	
fclean: clean
	rm -f server client libft/libft.a

re: fclean all

.PHONY: all bonus libft clean fclean re
