# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/02 21:58:14 by lpaulo-m          #+#    #+#              #
#    Updated: 2021/02/13 22:56:05 by lpaulo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CC_FLAGS = -Wall -Wextra -Werror
DEBUG_CC_FLAGS = -g -Wall -Wextra -Werror

REMOVE = /bin/rm -f
REMOVE_RECURSIVE = /bin/rm -rf
ARCHIVE_AND_INDEX = ar -rcs

HEADER = libft.h

SOURCES = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c \
	ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isprint.c ft_isascii.c ft_toupper.c ft_tolower.c ft_calloc.c \
	ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJECTS = $(subst .c,.o,$(SOURCES))

BONUS_SOURCES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BONUS_OBJECTS = $(subst .c,.o,$(BONUS_SOURCES))

EXAMPLE_MAIN = example.c
EXECUTE_EXAMPLE = time ./a.out
EXAMPLE_GARBAGE = a.out a.out.dSYM

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADER)
	$(CC) $(CC_FLAGS) -c $(SOURCES)
	$(ARCHIVE_AND_INDEX) $(NAME) $(OBJECTS) 

bonus: $(BONUS_OBJECTS) $(NAME)
	$(CC) $(CC_FLAGS) -c $(BONUS_SOURCES)
	$(ARCHIVE_AND_INDEX) $(NAME) $(BONUS_OBJECTS)

example: $(NAME) bonus
	$(CC) $(DEBUG_CC_FLAGS) $(EXAMPLE_MAIN) $(NAME)
	$(EXECUTE_EXAMPLE)

clean:
	$(REMOVE) $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	$(REMOVE) $(NAME)

example_clean: fclean
	$(REMOVE_RECURSIVE) $(EXAMPLE_GARBAGE)

re: fclean all

.PHONY: all example re clean fclean example_clean
