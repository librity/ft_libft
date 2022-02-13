/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/13 17:44:03 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.h>

void test_ft_isdigit(void)
{
	TEST_MESSAGE("Testing ft_isdigit.");

	TEST_ASSERT_EQUAL(false, ft_isdigit('c'));
	TEST_ASSERT_EQUAL(false, ft_isdigit('X'));
	TEST_ASSERT_EQUAL(true, ft_isdigit('7'));
	TEST_ASSERT_EQUAL(false, ft_isdigit('~'));
	TEST_ASSERT_EQUAL(false, ft_isdigit('\15'));
	TEST_ASSERT_EQUAL(false, ft_isdigit('\10'));
	TEST_ASSERT_EQUAL(false, ft_isdigit('\30'));
	TEST_ASSERT_EQUAL(false, ft_isdigit('\0'));
	TEST_ASSERT_EQUAL(false, ft_isdigit('z'));
	TEST_ASSERT_EQUAL(false, ft_isdigit('L'));
	TEST_ASSERT_EQUAL(false, ft_isdigit('['));
	TEST_ASSERT_EQUAL(false, ft_isdigit('|'));
	TEST_ASSERT_EQUAL(false, ft_isdigit('&'));
	TEST_ASSERT_EQUAL(true, ft_isdigit('0'));
	TEST_ASSERT_EQUAL(true, ft_isdigit('1'));
	TEST_ASSERT_EQUAL(false, ft_isdigit(1000));
	TEST_ASSERT_EQUAL(false, ft_isdigit(-1000));
}
