/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/25 21:10:17 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.h>

void test_ft_bzero(void)
{
	TEST_MESSAGE("Testing ft_bzero.");

	char str_sys[50] = "Aticleworld is a programming Blog.";
	char str_ft[50] = "Aticleworld is a programming Blog.";
	bzero(str_sys + 11, 6);
	ft_bzero(str_ft + 11, 6);
	TEST_ASSERT_EQUAL_STRING(str_sys, str_ft);

	char str3_sys[50] = "Aticleworld is a programming Blog.";
	char str3_ft[50] = "MOTHERBOARD is a programming Blog.";
	bzero(str3_sys, 6);
	ft_bzero(str3_ft, 6);
	TEST_ASSERT_EQUAL_STRING(str3_sys, str3_ft);

	char str2_sys[5] = "ABCD";
	char str2_ft[5] = "ABCD";
	bzero(str2_sys, sizeof(str2_sys));
	ft_bzero(str2_ft, sizeof(str2_ft));
	TEST_ASSERT_EQUAL_STRING(str2_sys, str2_ft);

	int arr_sys[5] = {1, 2, 3, 4};
	int arr_ft[5] = {1, 2, 3, 4};
	bzero(arr_sys, sizeof(arr_sys));
	ft_bzero(arr_ft, sizeof(arr_ft));
	TEST_ASSERT_EQUAL_INT_ARRAY(arr_sys, arr_ft, 5);
}
