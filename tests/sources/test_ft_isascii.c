/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/25 21:10:17 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.h>

void test_ft_isascii(void)
{
	TEST_MESSAGE("Testing ft_isascii.");

	TEST_ASSERT_EQUAL(isascii('c'), ft_isascii('c'));
	TEST_ASSERT_EQUAL(isascii('X'), ft_isascii('X'));
	TEST_ASSERT_EQUAL(isascii('7'), ft_isascii('7'));
	TEST_ASSERT_EQUAL(isascii('~'), ft_isascii('~'));
	TEST_ASSERT_EQUAL(isascii('\15'), ft_isascii('\15'));
	TEST_ASSERT_EQUAL(isascii('\10'), ft_isascii('\10'));
	TEST_ASSERT_EQUAL(isascii('\30'), ft_isascii('\30'));
	TEST_ASSERT_EQUAL(isascii('\0'), ft_isascii('\0'));
	TEST_ASSERT_EQUAL(isascii('z'), ft_isascii('z'));
	TEST_ASSERT_EQUAL(isascii('L'), ft_isascii('L'));
	TEST_ASSERT_EQUAL(isascii('['), ft_isascii('['));
	TEST_ASSERT_EQUAL(isascii('|'), ft_isascii('|'));
	TEST_ASSERT_EQUAL(isascii('&'), ft_isascii('&'));
	TEST_ASSERT_EQUAL(isascii('0'), ft_isascii('0'));
	TEST_ASSERT_EQUAL(isascii('1'), ft_isascii('1'));
	TEST_ASSERT_EQUAL(isascii(1000), ft_isascii(1000));
	TEST_ASSERT_EQUAL(isascii(-1000), ft_isascii(-1000));
}
