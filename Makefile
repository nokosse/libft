# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 17:26:39 by kvisouth          #+#    #+#              #
#    Updated: 2022/12/08 16:20:41 by kvisouth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:src/%.c=obj/%.o)
RM	 = rm -rf
AR	 = ar rcs

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

obj/%.o: src/%.c
	@mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) obj

fclean: clean
	$(RM) $(NAME) src/./a.out

re: fclean all

.PHONY:		all clean fclean re