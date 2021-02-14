/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/14 01:17:08 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_memcpy(void)
{
	TEST_MESSAGE("Testing ft_memcpy.");

	char src1sys[20] = "How Are you ?";
	char dst1sys[20] = {0};
	char dst1_ft[20] = {0};
	memcpy(dst1sys, src1sys, sizeof(src1sys));
	ft_memcpy(dst1_ft, src1sys, sizeof(src1sys));
	TEST_ASSERT_EQUAL_STRING(dst1sys, dst1_ft);

	char csrcsys[] = "GeeksforGeeks";
	char cdestsys[100];
	char cdest_ft[100];
	memcpy(cdestsys, csrcsys, strlen(csrcsys) + 1);
	ft_memcpy(cdest_ft, csrcsys, strlen(csrcsys) + 1);
	TEST_ASSERT_EQUAL_STRING(cdestsys, cdest_ft);

	int isrcsys[] = {10, 20, 30, 40, 50};
	int numsys = sizeof(isrcsys) / sizeof(isrcsys[0]);
	int idestsys[numsys];
	int idest_ft[numsys];
	memcpy(idestsys, isrcsys, sizeof(isrcsys));
	ft_memcpy(idest_ft, isrcsys, sizeof(isrcsys));
	TEST_ASSERT_EQUAL_INT_ARRAY(idestsys, idest_ft, numsys);
}
