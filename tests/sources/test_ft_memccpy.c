/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/25 21:10:17 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tests.h>

void test_ft_memccpy(void)
{
	TEST_MESSAGE("Testing ft_memccpy.");

	char src1sys[20] = "How Are you ?";
	char dst1_ft[20] = {0};
	char dst1sys[20] = {0};
	memccpy(dst1sys, src1sys, 'o', sizeof(src1sys));
	ft_memccpy(dst1_ft, src1sys, 'o', sizeof(src1sys));
	TEST_ASSERT_EQUAL_STRING(dst1sys, dst1_ft);

	char csrcsys[] = "GeeksforGeeks";
	char csrc_ft[] = "GeeksforGeeks";
	char cdestsys[100];
	char cdest_ft[100];
	memccpy(cdestsys, csrcsys, 'o', strlen(csrcsys) + 1);
	ft_memccpy(cdest_ft, csrc_ft, 'o', strlen(csrcsys) + 1);
	TEST_ASSERT_EQUAL_STRING(cdestsys, cdest_ft);

	int isrcsys1[] = {10, 20, 30, 40, 50};
	int size1 = sizeof(isrcsys1) / sizeof(isrcsys1[0]);
	int idestsys1[size1];
	int idest_ft1[size1];
	memccpy(idestsys1, isrcsys1, 'o', sizeof(isrcsys1));
	ft_memccpy(idest_ft1, isrcsys1, 'o', sizeof(isrcsys1));
	TEST_ASSERT_EQUAL_INT_ARRAY(idestsys1, idest_ft1, size1);

	int isrcsys2[] = {10, 20, 30, 40, 50, 3, 4234, 323, 123, 4, 13, 45, 7, 88, 48, 4};
	int size2 = sizeof(isrcsys2) / sizeof(isrcsys2[0]);
	int idestsys2[size2];
	int idest_ft2[size2];
	memccpy(idestsys2, isrcsys2, 42, sizeof(isrcsys2));
	ft_memccpy(idest_ft2, isrcsys2, 42, sizeof(isrcsys2));
	TEST_ASSERT_EQUAL_INT_ARRAY(idestsys2, idest_ft2, size2);
}
