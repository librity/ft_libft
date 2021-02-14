# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/13 22:59:07 by lpaulo-m          #+#    #+#              #
#    Updated: 2021/02/13 23:42:35 by lpaulo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
DEBUG_CC_DEBUG_CC_FLAGS = -g -Wall -Wextra -Werror

REMOVE = /bin/rm -f
LIBFT_MAKE = make -C $(LIBFT_PATH)

UNITY = Unity/unity.c
LIBFT_PATH = ../libft
LIBFT_NAME = libft.a

TEST_MAIN = test.c
EXECUTE_TESTS = time ./a.out
TEST_GARBAGE = a.out

LIBFT = $(LIBFT_PATH)/$(LIBFT_NAME)

build_libft:
	@$(LIBFT_MAKE) all bonus

re: fclean build_libft

test: build_libft $(TEST_MAIN)
	@$(CC) $(DEBUG_CC_FLAGS) $(UNITY) $(TEST_MAIN) $(LIBFT)
	@$(EXECUTE_TESTS)

fclean:
	@$(LIBFT_MAKE) fclean
	@$(REMOVE) TEST_GARBAGE
