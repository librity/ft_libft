/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/25 21:10:17 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.h>

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
