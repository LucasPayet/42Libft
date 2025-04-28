# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lupayet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/24 09:34:40 by lupayet           #+#    #+#              #
#    Updated: 2025/04/28 16:48:12 by lupayet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC	= gcc
AR = ar rcs
CFLAGS	= -Wall -Wextra -Werror
RM = rm -f

SOURCES	= $(shell ls *.c)
INCLUDES= libft.h
OBJ	= $(SOURCES:.c=.o) 

all:$(NAME)
.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	@$(RM) *.o

fclean: clean
	@$(RM) $(NAME)

re:fclean all

.PHONY: all clean fclean re

#$(CC) $(CFLAGS) $(SOURCES)
