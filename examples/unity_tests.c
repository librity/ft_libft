/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unity_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 21:40:49 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/04 22:18:45 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unity.h"
#include "libft.h"

#include <stdio.h>
#include <string.h>

void setUp(void) {}

void tearDown(void) {}

void ft_strncmp_test(void)
{
	TEST_MESSAGE("Comparing ft_strncmp with system's strncmp");

	TEST_ASSERT_TRUE(
			ft_strncmp("ABA", "AB", 3) == strncmp("ABA", "AB", 3));

	TEST_ASSERT_TRUE(
			ft_strncmp("ABA", "AB", 3) == strncmp("ABA", "AB", 3));

	TEST_ASSERT_TRUE(
			ft_strncmp("ABA", "ABZ", 3) == strncmp("ABA", "ABZ", 3));

	TEST_ASSERT_TRUE(
			ft_strncmp("ABA", "ABA", 2) == strncmp("ABA", "ABA", 2));

	TEST_ASSERT_TRUE(
			ft_strncmp("ABA", "AB", 3) == strncmp("ABA", "AB", 3));

	TEST_ASSERT_TRUE(
			ft_strncmp("ABA", "ABZ", 3) == strncmp("ABA", "ABZ", 3));

	TEST_ASSERT_TRUE(
			ft_strncmp("ABA", "ABA", 2) == strncmp("ABA", "ABA", 2));

	TEST_ASSERT_TRUE(
			ft_strncmp("ABC", "ABC", 3) == strncmp("ABC", "ABC", 3));

	TEST_ASSERT_TRUE(
			ft_strncmp("ABC", "ABCD", 3) == strncmp("ABC", "ABCD", 3));

	TEST_ASSERT_TRUE(
			ft_strncmp("hello", "helLO WORLD", 3) == strncmp("hello", "helLO WORLD", 3));

	TEST_ASSERT_TRUE(
			ft_strncmp("hello", "helLO WORLD", 4) == strncmp("hello", "helLO WORLD", 4));

	TEST_ASSERT_TRUE(
			ft_strncmp("ABC", "ABCD", 4) == strncmp("ABC", "ABCD", 4));

	TEST_ASSERT_TRUE(
			ft_strncmp("ABc", "ABC", 3) == strncmp("ABc", "ABC", 3));

	TEST_ASSERT_TRUE(
			ft_strncmp("abcdef", "ABCDEF", 4) == strncmp("abcdef", "ABCDEF", 4));

	TEST_ASSERT_TRUE(
			ft_strncmp("ABCDEF", "abcdef", 4) == strncmp("ABCDEF", "abcdef", 4));

	TEST_ASSERT_TRUE(
			ft_strncmp("Aticleworld", "Atic", 3) == strncmp("Aticleworld", "Atic", 3));

	TEST_ASSERT_TRUE(
			ft_strncmp("Hello", "Aticleworld", 5) == strncmp("Hello", "Aticleworld", 5));

	TEST_ASSERT_TRUE(
			ft_strncmp("Aticleworld", "world", 3) == strncmp("Aticleworld", "world", 3));

	TEST_ASSERT_TRUE(
			ft_strncmp("world", "Aticleworld", 3) == strncmp("world", "Aticleworld", 3));

	TEST_ASSERT_TRUE(
			ft_strncmp("world", "Aticleworld", 3) == strncmp("world", "Aticleworld", 3));

	TEST_ASSERT_TRUE(
			ft_strncmp("ABCDE\0\0\0\0", "ABCDE\0\0\0\0", 7) == strncmp("ABCDE\0\0\0\0", "ABCDE\0\0\0\0", 7));

	TEST_ASSERT_TRUE(
			ft_strncmp("ABCDE\0\0\0\0", "ABCDE\0abc", 5) == strncmp("ABCDE\0\0\0\0", "ABCDE\0abc", 5));

	TEST_ASSERT_TRUE(
			ft_strncmp("ABCDE\0\0\0\0", "ABCDEFGH", 8) == strncmp("ABCDE\0\0\0\0", "ABCDEFGH", 8));
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(ft_strncmp_test);
	return UNITY_END();
}
