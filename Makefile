# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lupayet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/24 09:34:40 by lupayet           #+#    #+#              #
#    Updated: 2025/05/06 11:27:37 by lupayet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC	= gcc
AR = ar rcs
CFLAGS	= -Wall -Wextra -Werror
RM = rm -rf

SRC	= src/ft_isascii.c src/ft_strlcat.c src/ft_toupper.c src/ft_isdigit.c \
	  src/ft_striteri.c src/ft_atoi.c src/ft_putchar_fd.c src/ft_calloc.c \
	  src/ft_strdup.c src/ft_strncmp.c src/ft_strnstr.c src/ft_strchr.c \
	  src/ft_strtrim.c src/ft_split.c src/ft_strmapi.c src/ft_strlcpy.c \
	  src/ft_memchr.c src/ft_tolower.c src/ft_isalnum.c src/ft_isprint.c \
	  src/ft_memmove.c src/ft_putendl_fd.c src/ft_substr.c src/ft_memset.c \
	  src/ft_memcpy.c src/ft_memcmp.c src/ft_bzero.c src/ft_strlen.c \
	  src/ft_putstr_fd.c src/ft_isalpha.c src/ft_strjoin.c src/ft_itoa.c \
	  src/ft_putnbr_fd.c src/ft_strrchr.c

BONUS = bonus/ft_lstnew_bonus.c bonus/ft_lstadd_front_bonus.c \
		bonus/ft_lstsize_bonus.c bonus/ft_lstlast_bonus.c \
		bonus/ft_lstadd_back_bonus.c

BONUS_OBJ = $(BONUS:.c=.o)

OBJ	= $(SRC:.c=.o) 

INC = -I includes

all:$(NAME)

%.o: %.c includes/libft.h
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus: $(BONUS_OBJ) $(NAME)
	$(AR) $(NAME) $(BONUS_OBJ)

clean:
	$(RM) src/*.o
	$(RM) bonus/*.o

fclean: clean
	$(RM) $(NAME)

re:fclean all

.PHONY: all clean fclean re bonus
