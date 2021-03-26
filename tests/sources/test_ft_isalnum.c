/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/25 21:10:17 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.h>

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
