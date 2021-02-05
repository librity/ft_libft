/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/05 02:01:53 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char src1sys[20] = "How Are you ?";
	char dst1sys[20] = {0};
	memccpy(dst1sys, src1sys, 'o', sizeof(src1sys));
	printf("dst1sys = %s\n", dst1sys);
	printf("---------------\n");

	char src1_ft[20] = "How Are you ?";
	char dst1_ft[20] = {0};
	ft_memccpy(dst1_ft, src1_ft, 'o', sizeof(src1_ft));
	printf("dst1_ft = %s\n", dst1_ft);
	printf("---------------\n");

	char csrcsys[] = "GeeksforGeeks";
	char cdestsys[100];
	memccpy(cdestsys, csrcsys, 'o', strlen(csrcsys) + 1);
	printf("Copied string is %s\n", cdestsys);
	printf("---------------\n");

	char csrc_ft[] = "GeeksforGeeks";
	char cdest_ft[100];
	memccpy(cdest_ft, csrc_ft, 'o', strlen(csrc_ft) + 1);
	printf("Copied string is %s\n", cdest_ft);
	printf("---------------\n");

	int i;

	int isrcsys[] = {10, 20, 30, 40, 50};
	int numsys = sizeof(isrcsys) / sizeof(isrcsys[0]);
	int idestsys[numsys];
	memccpy(idestsys, isrcsys, 'o', sizeof(isrcsys));
	printf("Copied array is ");
	for (i = 0; i < numsys; i++)
		printf("%d ", idestsys[i]);
	printf("\n---------------\n");

	int isrc_ft[] = {10, 20, 30, 40, 50};
	int num_ft = sizeof(isrc_ft) / sizeof(isrc_ft[0]);
	int idest_ft[num_ft];
	ft_memccpy(idest_ft, isrc_ft, 'o', sizeof(isrc_ft));
	printf("Copied array is ");
	for (i = 0; i < num_ft; i++)
		printf("%d ", idest_ft[i]);
	printf("\n---------------\n");

	return 0;
}
