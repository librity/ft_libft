/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/13 17:44:34 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.h>

void test_ft_isalpha(void)
{
	TEST_MESSAGE("Testing ft_isalpha.");

	TEST_ASSERT_EQUAL(true, ft_isalpha('c'));
	TEST_ASSERT_EQUAL(true, ft_isalpha('X'));
	TEST_ASSERT_EQUAL(false, ft_isalpha('7'));
	TEST_ASSERT_EQUAL(false, ft_isalpha('~'));
	TEST_ASSERT_EQUAL(false, ft_isalpha('\15'));
	TEST_ASSERT_EQUAL(false, ft_isalpha('\10'));
	TEST_ASSERT_EQUAL(false, ft_isalpha('\30'));
	TEST_ASSERT_EQUAL(false, ft_isalpha('\0'));
	TEST_ASSERT_EQUAL(true, ft_isalpha('z'));
	TEST_ASSERT_EQUAL(true, ft_isalpha('L'));
	TEST_ASSERT_EQUAL(false, ft_isalpha('['));
	TEST_ASSERT_EQUAL(false, ft_isalpha('|'));
	TEST_ASSERT_EQUAL(false, ft_isalpha('&'));
	TEST_ASSERT_EQUAL(false, ft_isalpha('0'));
	TEST_ASSERT_EQUAL(false, ft_isalpha('1'));
	TEST_ASSERT_EQUAL(false, ft_isalpha(1000));
	TEST_ASSERT_EQUAL(false, ft_isalpha(-1000));
}
