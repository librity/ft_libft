# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/02 21:58:14 by lpaulo-m          #+#    #+#              #
#    Updated: 2022/10/18 19:42:35 by lpaulo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES_PATH = ./sources
OBJECTS_PATH = ./objects
INCLUDES_PATH = ./includes
TESTS_PATH = ./tests

# CC = cc
# CC = gcc
# CC = clang
CC = clang-12

CC_STRICT = $(CC) \
	$(CCF_INCLUDES) \
	$(CCF_STRICT)

CC_FULL = $(CC_STRICT) \
	$(CCF_DEBUG)
#	$(CCF_LEAK) \
#	$(CCF_OPTIMIZATION) \

CCF_INCLUDES = -I $(INCLUDES_PATH)
CCF_STRICT = -Wall -Wextra -Werror
CCF_OPTIMIZATION = -O3
CCF_DEBUG = -g
CCF_LEAK = -fsanitize=leak

MAKE_EXTERNAL = make -C
SAFE_MAKEDIR = mkdir -p
ARCHIVE_AND_INDEX = ar -rcs

REMOVE = /bin/rm -f
REMOVE_RECURSIVE = /bin/rm -rf

HEADER_FILE = libft.h
HEADER = $(addprefix $(INCLUDES_PATH)/,$(HEADER_FILE))

SOURCES = $(wildcard $(SOURCES_PATH)/**/*.c) $(wildcard $(SOURCES_PATH)/*.c)
# SOURCES =

OBJECTS = $(patsubst $(SOURCES_PATH)/%.c, $(OBJECTS_PATH)/%.o, $(SOURCES))
OBJECT_DIRECTORIES = $(sort $(dir $(OBJECTS)))

################################################################################
# REQUIRED
################################################################################

all: $(NAME)

$(NAME): $(HEADER) $(OBJECTS)
	$(ARCHIVE_AND_INDEX) $(NAME) $(OBJECTS)

$(OBJECTS_PATH)/%.o: $(SOURCES_PATH)/%.c
	$(CC_FULL) -c -o $@ $<

re: fclean all

################################################################################
# DIRS
################################################################################

dirs: $(OBJECTS_PATH) $(OBJECT_DIRECTORIES)

$(OBJECTS_PATH):
	$(SAFE_MAKEDIR) $@ && touch "$@.keep"

$(OBJECT_DIRECTORIES):
	$(SAFE_MAKEDIR) $@ && touch "$@.keep"

################################################################################
# CLEAN
################################################################################

clean:
	$(REMOVE) $(OBJECTS)

fclean: clean
	$(REMOVE) $(NAME)

################################################################################
# TESTS
################################################################################

test:
	$(MAKE_EXTERNAL) $(TESTS_PATH)

test_clean:
	$(MAKE_EXTERNAL) $(TESTS_PATH) fclean

################################################################################
# EXAMPLE
################################################################################

EXAMPLE_MAIN = examples/example.c
EXECUTE_EXAMPLE = ./a.out
EXAMPLE_GARBAGE = a.out a.out.dSYM

example: $(NAME)
	$(CC_FULL) $(EXAMPLE_MAIN) $(NAME)
	$(EXECUTE_EXAMPLE)

vgexample: $(NAME)
	$(CC_STRICT) $(CCF_DEBUG) $(EXAMPLE_MAIN) $(NAME)
	valgrind $(EXECUTE_EXAMPLE)

example_clean: fclean
	$(REMOVE_RECURSIVE) $(EXAMPLE_GARBAGE)

################################################################################
# VALGRIND
################################################################################

CC_VG = $(CC) \
	$(CCF_INCLUDES) \
	$(CCF_STRICT)

VG = valgrind
VG_FLAGS = --leak-check=full --show-leak-kinds=all --trace-children=yes
VG_LOG = valgrind_leaks.log
VG_LOG_FLAGS = --log-file=$(VG_LOG) \
	--leak-check=full \
	--show-leak-kinds=all \
	--trace-children=yes \
	--track-origins=yes \
	--verbose

VG_TARGET = ./a.out

vg: vg_build
	$(VG) $(VG_FLAGS) $(VG_TARGET)

vglog: vg_build
	$(VG) $(VG_LOG_FLAGS) $(VG_TARGET)

vg_build: $(NAME)
	$(CC_VG) \
		$(EXAMPLE_MAIN) \
		$(NAME)

vglog_clean: fclean
	$(REMOVE) $(VG_LOG)

################################################################################
# MISC
################################################################################

norm:
	norminette $(INCLUDES_PATH)
	@printf "\n$(G)=== No norminette errors found in $(INCLUDES_PATH) ===$(RC)\n\n"
	norminette $(SOURCES_PATH)
	@printf "\n$(G)=== No norminette errors found in $(SOURCES_PATH) ===$(RC)\n\n"

git:
	git add -A
	git commit -m "update"
	git push

gitm:
	git add -A
	git commit -m $m
	git push

dump_sources:
	@echo =========== SOURCES ===========
	@echo "SOURCES = $(SOURCES)"
	@echo ===============================

################################################################################
# PHONY
################################################################################

.PHONY: all re \
	dirs \
	clean fclean \
\
	test_clean test \
	example example_clean \
	vg vglog vg_build vglog_clean \
\
	norm git gitm dump_sources

################################################################################
# Colors
################################################################################

# Black, Red, Green, Yellow, Blue, Purple, Cyan, White
Bk = \033[0;30m
R = \033[0;31m
G = \033[0;32m
Y = \033[0;33m
B = \033[0;34m
P = \033[0;35m
C = \033[0;36m
W = \033[0;37m
# Bold
BkB = \033[1;30m
RB = \033[1;31m
GB = \033[1;32m
YB = \033[1;33m
BB = \033[1;34m
PB = \033[1;35m
CB = \033[1;36m
WB = \033[1;37m
# Reset Color
RC	= \033[0m
