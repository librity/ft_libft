/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:24:12 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/25 21:10:17 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.h>

void test_ft_atoi(void)
{
	TEST_MESSAGE("Testing ft_atoi.");

	TEST_ASSERT_EQUAL(atoi("-123"), ft_atoi("-123"));
	TEST_ASSERT_EQUAL(atoi("98993489"), ft_atoi("98993489"));
	TEST_ASSERT_EQUAL(atoi("-2147483648"), ft_atoi("-2147483648"));
	TEST_ASSERT_EQUAL(atoi("tutorialspoint.com"), ft_atoi("tutorialspoint.com"));
	TEST_ASSERT_EQUAL(atoi("  \t\r--451"), ft_atoi("  \t\r--451"));
	TEST_ASSERT_EQUAL(atoi("  ---+--+1234ab567"), ft_atoi("  ---+--+1234ab567"));
	TEST_ASSERT_EQUAL(atoi("  ---+--+--+6451-1ab567"), ft_atoi("  ---+--+--+6451-1ab567"));
}
