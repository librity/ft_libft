/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/25 21:10:17 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.h>

void test_ft_memset(void)
{
	TEST_MESSAGE("Testing ft_memset.");

	char str_sys[50] = "Aticleworld is a programming Blog.";
	char str_ft[50] = "Aticleworld is a programming Blog.";
	memset(str_sys + 11, '*', 6);
	ft_memset(str_ft + 11, '*', 6);
	TEST_ASSERT_EQUAL_STRING(str_sys, str_ft);

	int arr_sys[5];
	int arr_ft[5];
	memset(arr_sys, 42, sizeof(arr_sys));
	ft_memset(arr_ft, 42, sizeof(arr_ft));
	TEST_ASSERT_EQUAL_INT_ARRAY(arr_sys, arr_ft, 5);

	char str2_sys[6] = "ABCD";
	char str2_ft[6] = "ABCD";
	memset(str2_sys, '3', sizeof(str2_sys) - 1);
	ft_memset(str2_ft, '3', sizeof(str2_ft) - 1);
	TEST_ASSERT_EQUAL_STRING(str2_sys, str2_ft);
}
