/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/05 01:10:43 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printArray(int arr[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("0x%x\n", arr[i]);
	}
}

void printCharArray(char arr[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%c\n", arr[i]);
	}
}

int main()
{
	char str_sys[50] = "Aticleworld is a programming Blog.";
	printf("\nBefore bzero(): %s\n\n", str_sys);
	bzero(str_sys + 11, 6);
	printf("After bzero(): %s\n\n", str_sys);
	printf("---------------\n");

	char str_ft[50] = "Aticleworld is a programming Blog.";
	printf("\nBefore bzero(): %s\n\n", str_ft);
	ft_bzero(str_ft + 11, 6);
	printf("After bzero(): %s\n\n", str_ft);
	printf("---------------\n");

	int arr_sys[5];
	bzero(arr_sys, sizeof(arr_sys));
	printArray(arr_sys, 5);
	printf("---------------\n");

	int arr_ft[5];
	ft_bzero(arr_ft, sizeof(arr_ft));
	printArray(arr_ft, 5);
	printf("---------------\n");

	char str2_sys[5] = "ABCD";
	printCharArray(str2_sys, 5);
	bzero(str2_sys, sizeof(str2_sys));
	printCharArray(str2_sys, 5);
	printf("---------------\n");

	char str2_ft[5] = "ABCD";
	printCharArray(str2_ft, 5);
	bzero(str2_ft, sizeof(str2_ft));
	printCharArray(str2_ft, 5);
	printf("---------------\n");

	return 0;
}
