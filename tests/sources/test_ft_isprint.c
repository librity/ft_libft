/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/13 17:45:53 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.h>

void test_ft_isprint(void)
{
	TEST_MESSAGE("Testing ft_isprint.");

	TEST_ASSERT_EQUAL(true, ft_isprint('c'));
	TEST_ASSERT_EQUAL(true, ft_isprint('X'));
	TEST_ASSERT_EQUAL(true, ft_isprint('7'));
	TEST_ASSERT_EQUAL(true, ft_isprint('~'));
	TEST_ASSERT_EQUAL(false, ft_isprint('\15'));
	TEST_ASSERT_EQUAL(false, ft_isprint('\10'));
	TEST_ASSERT_EQUAL(false, ft_isprint('\30'));
	TEST_ASSERT_EQUAL(false, ft_isprint('\0'));
	TEST_ASSERT_EQUAL(true, ft_isprint('z'));
	TEST_ASSERT_EQUAL(true, ft_isprint('L'));
	TEST_ASSERT_EQUAL(true, ft_isprint('['));
	TEST_ASSERT_EQUAL(true, ft_isprint('|'));
	TEST_ASSERT_EQUAL(true, ft_isprint('&'));
	TEST_ASSERT_EQUAL(true, ft_isprint('0'));
	TEST_ASSERT_EQUAL(true, ft_isprint('1'));
	TEST_ASSERT_EQUAL(false, ft_isprint(1000));
	TEST_ASSERT_EQUAL(false, ft_isprint(-1000));
}
