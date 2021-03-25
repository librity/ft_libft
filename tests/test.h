/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 23:46:59 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/25 03:12:16 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
#define TEST_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "Unity/unity.h"
#include "../libft/libft.h"

void test_ft_memset(void);
void test_ft_bzero(void);
void test_ft_memcpy(void);
void test_ft_memccpy(void);
void test_ft_memmove(void);
void test_ft_memchr(void);
void test_ft_memcmp(void);

void test_ft_strlen(void);
void test_ft_strlcpy(void);
void test_ft_strlcat(void);
void test_ft_strchr(void);
void test_ft_strrchr(void);
void test_ft_strnstr(void);
void test_ft_strncmp(void);
void test_ft_atoi(void);

void test_ft_isalpha(void);
void test_ft_isdigit(void);
void test_ft_isalnum(void);
void test_ft_isascii(void);
void test_ft_isprint(void);
void test_ft_toupper(void);
void test_ft_tolower(void);

void test_ft_calloc(void);
void test_ft_strdup(void);

void test_ft_substr(void);
void test_ft_strjoin(void);
void test_ft_strtrim(void);
void test_ft_split(void);
void test_ft_itoa(void);
void test_ft_strmapi(void);
void test_ft_putchar_fd(void);
void test_ft_putstr_fd(void);
void test_ft_putendl_fd(void);
void test_ft_putnbr_fd(void);

void test_ft_lstnew(void);
void test_ft_lstadd_front(void);
void test_ft_lstsize(void);
void test_ft_lstlast(void);
void test_ft_lstadd_back(void);
void test_ft_lstdelone(void);
void test_ft_lstclear(void);
void test_ft_lstiter(void);
void test_ft_lstmap(void);

#endif
