# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/02 21:58:14 by lpaulo-m          #+#    #+#              #
#    Updated: 2021/03/19 02:26:36 by lpaulo-m         ###   ########.fr        #
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

SOURCES = 	unless.c \
	\
	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
	ft_memmove.c ft_memchr.c ft_memcmp.c \
	\
	ft_strlen.c ft_strcpy.c ft_strdel.c ft_strnchr.c \
	\
	ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
	ft_strnstr.c ft_strncmp.c \
	\
	ft_atoi.c ft_atoui.c ft_atoui_strict.c \
	\
	ft_isdigit.c ft_is_whitespace.c ft_is_plus_or_minus.c \
	ft_is_decimal_char.c ft_isupper.c ft_islower.c ft_isalpha.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c \
	\
	ft_toupper.c ft_tolower.c \
	\
	ft_calloc.c ft_strdup.c \
	\
	ft_substr.c ft_strtrim.c ft_split.c ft_strmapi.c \
	\
	ft_strjoin.c ft_strjoin_and_free.c ft_strjoin_and_free_free.c \
	ft_strjoin_and_del.c ft_strjoin_and_del_del.c \
	\
	ft_itoa.c ft_i_to_buffer.c \
	\
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	\
	ft_putchar.c ft_putstr.c ft_putstr_up_to.c ft_putendl.c \
	\
	ft_is_valid_base.c ft_aux_handle_minus_sign_li.c \
	\
	ft_putnbr.c ft_putnbr_i.c ft_putnbr_ui.c ft_putnbr_ul.c ft_putnbr_li.c \
	\
	ft_putnbr_base.c ft_putnbr_base_i.c ft_putnbr_base_ui.c \
	ft_putnbr_base_ul.c ft_putnbr_base_li.c \
	\
	ft_puthex_uppercase.c ft_puthex_downcase.c \
	\
	ft_count_digits.c ft_count_digits_i.c ft_count_digits_i.c \
	ft_count_digits_ui.c ft_count_digits_ul.c \
	\
	ft_count_digits_hex_ui.c ft_count_digits_hex_ul.c \
	\
	ft_count_chars_i.c \
	\
	ft_skip_digits.c ft_skip_number.c \
	\
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJECTS = $(subst .c,.o,$(SOURCES))

EXAMPLE_MAIN = example.c
EXECUTE_EXAMPLE = time ./a.out
EXAMPLE_GARBAGE = a.out a.out.dSYM

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADER)
	$(CC) $(CC_FLAGS) -c $(SOURCES)
	$(ARCHIVE_AND_INDEX) $(NAME) $(OBJECTS) 

example: $(NAME)
	$(CC) $(DEBUG_CC_FLAGS) $(EXAMPLE_MAIN) $(NAME)
	$(EXECUTE_EXAMPLE)

clean:
	$(REMOVE) $(OBJECTS)

fclean: clean
	$(REMOVE) $(NAME)

example_clean: fclean
	$(REMOVE_RECURSIVE) $(EXAMPLE_GARBAGE)

re: fclean all

.PHONY: all example re clean fclean example_clean
