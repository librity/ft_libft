/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/13 23:55:36 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_isalpha(void)
{
	TEST_MESSAGE("Testing ft_isalpha.");

	TEST_ASSERT_EQUAL(isalpha('c'), ft_isalpha('c'));
	TEST_ASSERT_EQUAL(isalpha('X'), ft_isalpha('X'));
	TEST_ASSERT_EQUAL(isalpha('7'), ft_isalpha('7'));
	TEST_ASSERT_EQUAL(isalpha('~'), ft_isalpha('~'));
	TEST_ASSERT_EQUAL(isalpha('\15'), ft_isalpha('\15'));
	TEST_ASSERT_EQUAL(isalpha('\10'), ft_isalpha('\10'));
	TEST_ASSERT_EQUAL(isalpha('\30'), ft_isalpha('\30'));
	TEST_ASSERT_EQUAL(isalpha('\0'), ft_isalpha('\0'));
	TEST_ASSERT_EQUAL(isalpha('z'), ft_isalpha('z'));
	TEST_ASSERT_EQUAL(isalpha('L'), ft_isalpha('L'));
	TEST_ASSERT_EQUAL(isalpha('['), ft_isalpha('['));
	TEST_ASSERT_EQUAL(isalpha('|'), ft_isalpha('|'));
	TEST_ASSERT_EQUAL(isalpha('&'), ft_isalpha('&'));
	TEST_ASSERT_EQUAL(isalpha('0'), ft_isalpha('0'));
	TEST_ASSERT_EQUAL(isalpha('1'), ft_isalpha('1'));
	TEST_ASSERT_EQUAL(isalpha(1000), ft_isalpha(1000));
	TEST_ASSERT_EQUAL(isalpha(-1000), ft_isalpha(-1000));
}
