/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/14 00:56:29 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_memcmp(void)
{
	TEST_MESSAGE("Testing ft_memcmp.");

	char str1sys1[15] = "Aticleworld";
	char str1sys2[15] = "Aticleworld";
	TEST_ASSERT_EQUAL(memcmp(str1sys1, str1sys2, 5), ft_memcmp(str1sys1, str1sys2, 5));

	char str2sys1[15] = "Hello";
	char str2sys2[15] = "Aticleworld";
	TEST_ASSERT_EQUAL(memcmp(str2sys1, str2sys2, 5), ft_memcmp(str2sys1, str2sys2, 5));

	char arr1sys1[] = {1, 2, 3, 4};
	char arr1sys2[] = {1, 2, 3, 4};
	TEST_ASSERT_EQUAL(memcmp(arr1sys1, arr1sys2, 4), ft_memcmp(arr1sys1, arr1sys2, 4));

	char arr2sys1[] = {1, 2, 3, 4};
	char arr2sys2[] = {0, 2, 3, 4};
	TEST_ASSERT_EQUAL(memcmp(arr2sys1, arr2sys2, 4), ft_memcmp(arr2sys1, arr2sys2, 4));

	TEST_ASSERT_EQUAL(memcmp("abc", "abc", 2), ft_memcmp("abc", "abc", 2));
	TEST_ASSERT_EQUAL(memcmp("bca", "abc", 2), ft_memcmp("bca", "abc", 2));
	TEST_ASSERT_EQUAL(memcmp("abc", "bca", 2), ft_memcmp("abc", "bca", 2));
}
