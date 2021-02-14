/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/14 00:01:20 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_isdigit(void)
{
	TEST_MESSAGE("Testing ft_isdigit.");

	TEST_ASSERT_EQUAL(isdigit('c'), ft_isdigit('c'));
	TEST_ASSERT_EQUAL(isdigit('X'), ft_isdigit('X'));
	TEST_ASSERT_EQUAL(isdigit('7'), ft_isdigit('7'));
	TEST_ASSERT_EQUAL(isdigit('~'), ft_isdigit('~'));
	TEST_ASSERT_EQUAL(isdigit('\15'), ft_isdigit('\15'));
	TEST_ASSERT_EQUAL(isdigit('\10'), ft_isdigit('\10'));
	TEST_ASSERT_EQUAL(isdigit('\30'), ft_isdigit('\30'));
	TEST_ASSERT_EQUAL(isdigit('\0'), ft_isdigit('\0'));
	TEST_ASSERT_EQUAL(isdigit('z'), ft_isdigit('z'));
	TEST_ASSERT_EQUAL(isdigit('L'), ft_isdigit('L'));
	TEST_ASSERT_EQUAL(isdigit('['), ft_isdigit('['));
	TEST_ASSERT_EQUAL(isdigit('|'), ft_isdigit('|'));
	TEST_ASSERT_EQUAL(isdigit('&'), ft_isdigit('&'));
	TEST_ASSERT_EQUAL(isdigit('0'), ft_isdigit('0'));
	TEST_ASSERT_EQUAL(isdigit('1'), ft_isdigit('1'));
	TEST_ASSERT_EQUAL(isdigit(1000), ft_isdigit(1000));
	TEST_ASSERT_EQUAL(isdigit(-1000), ft_isdigit(-1000));
}
