/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/25 21:10:17 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.h>

void test_ft_memchr(void)
{
	TEST_MESSAGE("Testing ft_memchr.");

	char string1sys[] = "Aticleworld";
	char *ptr1sys = memchr(string1sys, 'c', sizeof(string1sys));
	char *ptr1ft = ft_memchr(string1sys, 'c', sizeof(string1sys));
	TEST_ASSERT_EQUAL_UINT64(ptr1sys, ptr1ft);

	char string2sys[] = "Aticleworld";
	char *ptr2sys = memchr(string2sys, 'z', 500);
	char *ptr2ft = ft_memchr(string2sys, 'z', 500);
	TEST_ASSERT_EQUAL_UINT64(ptr2sys, ptr2ft);

	char string3sys[] = "Aticleworld";
	char *ptr3sys = memchr(string3sys, 'w', 500);
	char *ptr3ft = ft_memchr(string3sys, 'w', 500);
	TEST_ASSERT_EQUAL_UINT64(ptr3sys, ptr3ft);

	const char string5sys[] = "http://www.tutorialspoint.com";
	const char match5sys = '.';
	char *ptr5sys = memchr(string5sys, match5sys, strlen(string5sys));
	char *ptr5ft = ft_memchr(string5sys, match5sys, strlen(string5sys));
	TEST_ASSERT_EQUAL_UINT64(ptr5sys, ptr5ft);

	// BREAKING TEST
	// char *string4sys = NULL;
	// char *ptr4sys = memchr(string4sys, 'w', sizeof(string4sys));
	// char *ptr4ft = ft_memchr(string4sys, 'w', sizeof(string4sys));
	// TEST_ASSERT_EQUAL_UINT64(ptr4sys, ptr4ft);
}
