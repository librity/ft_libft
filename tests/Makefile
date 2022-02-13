# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/13 22:59:07 by lpaulo-m          #+#    #+#              #
#    Updated: 2022/02/13 18:27:03 by lpaulo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tests.a

CC = gcc
CC_DEBUG_FLAGS = -g
CC_INCLUDES = -I $(INCLUDES_PATH) -I $(LIBFT_INCLUDES)

MAKE_EXTERNAL = make -C
SAFE_MAKEDIR = mkdir -p
ARCHIVE_AND_INDEX = ar -rcs

REMOVE = /bin/rm -f
REMOVE_RECURSIVE = /bin/rm -rf

OBJECTS_PATH = ./objects
SOURCES_PATH = ./sources
INCLUDES_PATH = ./includes
LIBS_PATH = ./libs

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

all: test

$(NAME): $(OBJECTS)
	$(ARCHIVE_AND_INDEX) $(NAME) $(OBJECTS)

$(OBJECTS_PATH)/%.o: $(SOURCES_PATH)/%.c
	$(SAFE_MAKEDIR) $(OBJECTS_PATH)
	$(CC) $(CC_DEBUG_FLAGS) $(CC_INCLUDES) -o $@ -c $<

clean:
	$(REMOVE) $(OBJECTS)

fclean: clean
	@$(REMOVE) $(NAME)
	@$(REMOVE) $(TEST_GARBAGE)

re: fclean all

################################################################################
# TEST
################################################################################

TEST_MAIN = main.c
EXECUTE_TESTS = ./a.out
TEST_GARBAGE = a.out

test: build_libft $(NAME)
	$(CC) $(CC_DEBUG_FLAGS) $(CC_INCLUDES) $(TEST_MAIN) $(NAME) $(UNITY) $(LIBFT)
	$(EXECUTE_TESTS)

################################################################################
# LIBFT
################################################################################

LIBFT_PATH = ..
LIBFT_INCLUDES = $(LIBFT_PATH)/includes
LIBFT = $(LIBFT_PATH)/libft.a

build_libft:
	$(MAKE_EXTERNAL) $(LIBFT_PATH)

################################################################################
# PHONY
################################################################################

.PHONY: all re clean fclean \
	test \
	build_libft
