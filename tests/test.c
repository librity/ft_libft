/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 22:59:02 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/13 23:44:08 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "Unity/unity.h"
#include "../libft/libft.h"

void setUp(void){};

void tearDown(void){};

void test_ft_isalnum(void)
{
	TEST_MESSAGE("Testing ft_isalnum.");

	TEST_ASSERT_EQUAL(isalnum('c'), ft_isalnum('c'));
	TEST_ASSERT_EQUAL(isalnum('X'), ft_isalnum('X'));
	TEST_ASSERT_EQUAL(isalnum('7'), ft_isalnum('7'));
	TEST_ASSERT_EQUAL(isalnum('~'), ft_isalnum('~'));
	TEST_ASSERT_EQUAL(isalnum('\15'), ft_isalnum('\15'));
	TEST_ASSERT_EQUAL(isalnum('\10'), ft_isalnum('\10'));
	TEST_ASSERT_EQUAL(isalnum('\30'), ft_isalnum('\30'));
	TEST_ASSERT_EQUAL(isalnum('\0'), ft_isalnum('\0'));
	TEST_ASSERT_EQUAL(isalnum('z'), ft_isalnum('z'));
	TEST_ASSERT_EQUAL(isalnum('L'), ft_isalnum('L'));
	TEST_ASSERT_EQUAL(isalnum('['), ft_isalnum('['));
	TEST_ASSERT_EQUAL(isalnum('|'), ft_isalnum('|'));
	TEST_ASSERT_EQUAL(isalnum('&'), ft_isalnum('&'));
	TEST_ASSERT_EQUAL(isalnum('0'), ft_isalnum('0'));
	TEST_ASSERT_EQUAL(isalnum('1'), ft_isalnum('1'));
	TEST_ASSERT_EQUAL(isalnum(1000), ft_isalnum(1000));
	TEST_ASSERT_EQUAL(isalnum(-1000), ft_isalnum(-1000));
}

void test_ft_isprint(void)
{
	TEST_MESSAGE("Testing ft_isprint.");

	TEST_ASSERT_EQUAL(isprint('c'), ft_isprint('c'));
	TEST_ASSERT_EQUAL(isprint('X'), ft_isprint('X'));
	TEST_ASSERT_EQUAL(isprint('7'), ft_isprint('7'));
	TEST_ASSERT_EQUAL(isprint('~'), ft_isprint('~'));
	TEST_ASSERT_EQUAL(isprint('\15'), ft_isprint('\15'));
	TEST_ASSERT_EQUAL(isprint('\10'), ft_isprint('\10'));
	TEST_ASSERT_EQUAL(isprint('\30'), ft_isprint('\30'));
	TEST_ASSERT_EQUAL(isprint('\0'), ft_isprint('\0'));
	TEST_ASSERT_EQUAL(isprint('z'), ft_isprint('z'));
	TEST_ASSERT_EQUAL(isprint('L'), ft_isprint('L'));
	TEST_ASSERT_EQUAL(isprint('['), ft_isprint('['));
	TEST_ASSERT_EQUAL(isprint('|'), ft_isprint('|'));
	TEST_ASSERT_EQUAL(isprint('&'), ft_isprint('&'));
	TEST_ASSERT_EQUAL(isprint('0'), ft_isprint('0'));
	TEST_ASSERT_EQUAL(isprint('1'), ft_isprint('1'));
	TEST_ASSERT_EQUAL(isprint(1000), ft_isprint(1000));
	TEST_ASSERT_EQUAL(isprint(-1000), ft_isprint(-1000));
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_isalnum);
	RUN_TEST(test_ft_isprint);
	return UNITY_END();
}
