/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/25 21:10:17 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.h>

void test_ft_itoa(void)
{
	TEST_MESSAGE("Testing ft_itoa.");

	TEST_ASSERT_EQUAL_STRING("-2312", ft_itoa(-2312));
	TEST_ASSERT_EQUAL_STRING("2312", ft_itoa(2312));
	TEST_ASSERT_EQUAL_STRING("-231212121", ft_itoa(-231212121));
	TEST_ASSERT_EQUAL_STRING("122312", ft_itoa(122312));
	TEST_ASSERT_EQUAL_STRING("0", ft_itoa(0));
	TEST_ASSERT_EQUAL_STRING("42", ft_itoa(42));
}
