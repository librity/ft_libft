# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/13 22:59:07 by lpaulo-m          #+#    #+#              #
#    Updated: 2021/03/25 03:19:36 by lpaulo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
DEBUG_CC_DEBUG_CC_FLAGS = -g -Wall -Wextra -Werror

REMOVE = /bin/rm -f
LIBFT_MAKE = make -C $(LIBFT_PATH)

UNITY = Unity/unity.c
LIBFT_PATH = ../libft
LIBFT_NAME = libft.a

TESTS = test_ft_memset.c test_ft_bzero.c test_ft_memcpy.c test_ft_memccpy.c \
	test_ft_memmove.c test_ft_memchr.c test_ft_memcmp.c test_ft_strlen.c \
	test_ft_strlcpy.c test_ft_strlcat.c test_ft_strchr.c test_ft_strrchr.c \
	test_ft_strnstr.c test_ft_strncmp.c test_ft_atoi.c test_ft_isalpha.c \
	test_ft_isdigit.c test_ft_isalnum.c test_ft_isprint.c test_ft_isascii.c \
	test_ft_toupper.c test_ft_tolower.c test_ft_calloc.c test_ft_strdup.c \
	test_ft_substr.c test_ft_strjoin.c test_ft_strtrim.c test_ft_split.c \
	test_ft_itoa.c test_ft_strmapi.c test_ft_putchar_fd.c test_ft_putstr_fd.c \
	test_ft_putendl_fd.c test_ft_putnbr_fd.c test_ft_lstnew.c \
	test_ft_lstadd_front.c test_ft_lstsize.c test_ft_lstlast.c \
	test_ft_lstadd_back.c test_ft_lstdelone.c test_ft_lstclear.c \
	test_ft_lstiter.c test_ft_lstmap.c
TEST_MAIN = test.c
EXECUTE_TESTS = time ./a.out
TEST_GARBAGE = a.out

LIBFT = $(LIBFT_PATH)/$(LIBFT_NAME)

build_libft:
	@$(LIBFT_MAKE) all

re: fclean build_libft

test: build_libft $(TEST_MAIN)
	@$(CC) $(DEBUG_CC_FLAGS) $(UNITY) $(LIBFT) $(TESTS) $(TEST_MAIN)
	@$(EXECUTE_TESTS)

fclean:
	@$(LIBFT_MAKE) fclean
	@$(REMOVE) TEST_GARBAGE
