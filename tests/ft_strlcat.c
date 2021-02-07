/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/06 14:19:48 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{

	char stra1[1000], stra2[1000];
	strcpy(stra1, "Hi I m Pavan Kumar Sake . This is my 1st string to append to other string , \n");
	strcpy(stra2, " (This is my 2nd string to concatenate and then to print the result from the 1st string variable )\n");
	printf("String before concatenation: \"%s\"\n", stra1);
	strlcat(stra1, stra2, 100);
	printf("\nString after concatenation: \"%s\"\n", stra1);
	printf("---------------\n");

	strcpy(stra1, "Hi I m Pavan Kumar Sake . This is my 1st string to append to other string , \n");
	strcpy(stra2, " (This is my 2nd string to concatenate and then to print the result from the 1st string variable )\n");
	printf("String before concatenation: \"%s\"\n", stra1);
	ft_strlcat(stra1, stra2, 100);
	printf("\nString after concatenation: \"%s\"\n", stra1);
	printf("---------------\n");

	strcpy(stra1, "0101");
	strcpy(stra2, "\n234");
	printf("String before concatenation: \"%s\"\n", stra1);
	strlcat(stra1, stra2, 7);
	printf("\nString after concatenation: \"%s\"\n", stra1);
	printf("---------------\n");

	strcpy(stra1, "0101");
	strcpy(stra2, "\n234");
	printf("String before concatenation: \"%s\"\n", stra1);
	ft_strlcat(stra1, stra2, 7);
	printf("\nString after concatenation: \"%s\"\n", stra1);
	printf("---------------\n");

	strcpy(stra1, "0101");
	strcpy(stra2, "\n234");
	printf("String before concatenation: \"%s\"\n", stra1);
	strlcat(stra1, stra2, 6);
	printf("\nString after concatenation: \"%s\"\n", stra1);
	printf("---------------\n");

	strcpy(stra1, "0101");
	strcpy(stra2, "\n234");
	printf("String before concatenation: \"%s\"\n", stra1);
	ft_strlcat(stra1, stra2, 6);
	printf("\nString after concatenation: \"%s\"\n", stra1);
	printf("---------------\n");

	return 0;
}
