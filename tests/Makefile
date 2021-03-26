# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/13 22:59:07 by lpaulo-m          #+#    #+#              #
#    Updated: 2021/03/25 21:34:17 by lpaulo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tests.a

CC = gcc
CC_DEBUG_FLAGS = -g

MAKE_EXTERNAL = make -C
SAFE_MAKEDIR = mkdir -p
ARCHIVE_AND_INDEX = ar -rcs

REMOVE = /bin/rm -f
REMOVE_RECURSIVE = /bin/rm -rf

OBJECTS_PATH = ./objects
SOURCES_PATH = ./sources
INCLUDES_PATH = ../includes
LIBS_PATH = ../libs

LIBFT_PATH = ..
LIBFT = $(LIBFT_PATH)/libft.a

UNITY = $(LIBS_PATH)/Unity/unity.c

SOURCE_FILES = test_ft_memset.c test_ft_bzero.c test_ft_memcpy.c test_ft_memccpy.c \
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
SOURCES = $(addprefix $(SOURCES_PATH)/,$(SOURCE_FILES))

OBJECTS = $(addprefix $(OBJECTS_PATH)/,$(subst .c,.o,$(SOURCE_FILES)))

TEST_MAIN = main.c
EXECUTE_TESTS = ./a.out
TEST_GARBAGE = a.out

all: test

test: build_libft $(NAME)
	$(CC) $(CC_DEBUG_FLAGS) -I $(INCLUDES_PATH) $(TEST_MAIN) $(NAME) $(UNITY) $(LIBFT)
	$(EXECUTE_TESTS)

$(NAME): $(OBJECTS)
	$(ARCHIVE_AND_INDEX) $(NAME) $(OBJECTS)

$(OBJECTS_PATH)/%.o: $(SOURCES_PATH)/%.c
	$(SAFE_MAKEDIR) $(OBJECTS_PATH)
	$(CC) $(CC_DEBUG_FLAGS) -I $(INCLUDES_PATH) -o $@ -c $<

build_libft:
	$(MAKE_EXTERNAL) $(LIBFT_PATH)

clean:
	$(REMOVE) $(OBJECTS)

fclean: clean
	@$(REMOVE) $(NAME)
	@$(REMOVE) $(TEST_GARBAGE)
	@$(MAKE_EXTERNAL) $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all test build_libft re clean fclean
