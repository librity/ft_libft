/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 22:59:02 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/14 01:18:21 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void setUp(void){};

void tearDown(void){};

int main(void)
{
	UNITY_BEGIN();

	RUN_TEST(test_ft_memset);
	RUN_TEST(test_ft_bzero);
	RUN_TEST(test_ft_memcpy);
	RUN_TEST(test_ft_memccpy);
	RUN_TEST(test_ft_memmove);
	RUN_TEST(test_ft_memchr);
	RUN_TEST(test_ft_memcmp);

	// RUN_TEST(test_ft_strlen);
	// RUN_TEST(test_ft_strlcpy);
	// RUN_TEST(test_ft_strlcat);
	// RUN_TEST(test_ft_strchr);
	// RUN_TEST(test_ft_strrchr);
	// RUN_TEST(test_ft_strnstr);
	// RUN_TEST(test_ft_strncmp);
	RUN_TEST(test_ft_atoi);

	RUN_TEST(test_ft_isalpha);
	RUN_TEST(test_ft_isdigit);
	RUN_TEST(test_ft_isalnum);
	RUN_TEST(test_ft_isascii);
	RUN_TEST(test_ft_isprint);
	// RUN_TEST(test_ft_toupper);
	// RUN_TEST(test_ft_tolower);

	// RUN_TEST(test_ft_calloc);
	// RUN_TEST(test_ft_strdup);

	// RUN_TEST(test_ft_substr);
	// RUN_TEST(test_ft_strjoin);
	// RUN_TEST(test_ft_strtrim);
	// RUN_TEST(test_ft_split);
	RUN_TEST(test_ft_itoa);
	// RUN_TEST(test_ft_strmapi);
	// RUN_TEST(test_ft_putchar_fd);
	// RUN_TEST(test_ft_putstr_fd);
	// RUN_TEST(test_ft_putendl_fd);
	// RUN_TEST(test_ft_putnbr_fd);

	// RUN_TEST(test_ft_lstnew);
	// RUN_TEST(test_ft_lstadd_front);
	// RUN_TEST(test_ft_lstsize);
	// RUN_TEST(test_ft_lstlast);
	// RUN_TEST(test_ft_lstadd_back);
	// RUN_TEST(test_ft_lstdelone);
	// RUN_TEST(test_ft_lstclear);
	// RUN_TEST(test_ft_lstiter);
	// RUN_TEST(test_ft_lstmap);

	return UNITY_END();
}
