# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/13 22:59:07 by lpaulo-m          #+#    #+#              #
#    Updated: 2021/02/14 00:58:53 by lpaulo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
DEBUG_CC_DEBUG_CC_FLAGS = -g -Wall -Wextra -Werror

REMOVE = /bin/rm -f
LIBFT_MAKE = make -C $(LIBFT_PATH)

UNITY = Unity/unity.c
LIBFT_PATH = ../libft
LIBFT_NAME = libft.a

TESTS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c \
	ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isprint.c ft_isascii.c ft_toupper.c ft_tolower.c ft_calloc.c \
	ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
TEST_MAIN = test.c
EXECUTE_TESTS = time ./a.out
TEST_GARBAGE = a.out

LIBFT = $(LIBFT_PATH)/$(LIBFT_NAME)

build_libft:
	@$(LIBFT_MAKE) all bonus

re: fclean build_libft

test: build_libft $(TEST_MAIN)
	@$(CC) $(DEBUG_CC_FLAGS) $(UNITY) $(LIBFT) $(TESTS) $(TEST_MAIN)
	@$(EXECUTE_TESTS)

fclean:
	@$(LIBFT_MAKE) fclean
	@$(REMOVE) TEST_GARBAGE
