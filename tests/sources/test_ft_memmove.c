/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/14 01:21:12 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_memmove(void)
{
	TEST_MESSAGE("Testing ft_memmove.");

	char dest1sys[] = "Aticleworld";
	const char src1sys[] = "Amlendra";
	char dest1ft[] = "Aticleworld";
	const char src1ft[] = "Amlendra";
	memmove(dest1sys, src1sys, 5);
	ft_memmove(dest1ft, src1ft, 5);
	TEST_ASSERT_EQUAL_STRING(dest1sys, dest1ft);

	char str1sys[50] = "I am going from Delhi to Gorakhpur";
	char str1ft[50] = "I am going from Delhi to Gorakhpur";
	memmove(str1sys + 11, str1sys + 5, 29);
	ft_memmove(str1ft + 11, str1ft + 5, 29);
	TEST_ASSERT_EQUAL_STRING(str1sys, str1ft);

	char dest4sys[] = "oldstring";
	const char src4sys[] = "newstring";
	char dest4ft[] = "oldstring";
	const char src4ft[] = "newstring";
	memmove(dest4sys, src4sys, 9);
	ft_memmove(dest4ft, src4ft, 9);
	TEST_ASSERT_EQUAL_STRING(dest4sys, dest4ft);
}
