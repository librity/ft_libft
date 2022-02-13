/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/13 17:45:10 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.h>

void test_ft_isalnum(void)
{
	TEST_MESSAGE("Testing ft_isalnum.");

	TEST_ASSERT_EQUAL(true, ft_isalnum('c'));
	TEST_ASSERT_EQUAL(true, ft_isalnum('X'));
	TEST_ASSERT_EQUAL(true, ft_isalnum('7'));
	TEST_ASSERT_EQUAL(false, ft_isalnum('~'));
	TEST_ASSERT_EQUAL(false, ft_isalnum('\15'));
	TEST_ASSERT_EQUAL(false, ft_isalnum('\10'));
	TEST_ASSERT_EQUAL(false, ft_isalnum('\30'));
	TEST_ASSERT_EQUAL(false, ft_isalnum('\0'));
	TEST_ASSERT_EQUAL(true, ft_isalnum('z'));
	TEST_ASSERT_EQUAL(true, ft_isalnum('L'));
	TEST_ASSERT_EQUAL(false, ft_isalnum('['));
	TEST_ASSERT_EQUAL(false, ft_isalnum('|'));
	TEST_ASSERT_EQUAL(false, ft_isalnum('&'));
	TEST_ASSERT_EQUAL(true, ft_isalnum('0'));
	TEST_ASSERT_EQUAL(true, ft_isalnum('1'));
	TEST_ASSERT_EQUAL(false, ft_isalnum(1000));
	TEST_ASSERT_EQUAL(false, ft_isalnum(-1000));
}
