/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/06 12:31:58 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static void check_print(char *ptr, char string[])
{
	if (ptr != NULL)
	{
		printf("'c' found at position %lu.\n", ptr - string + 1);
		printf("search character found:  %s\n", ptr);
	}
	else
		printf("search character not found\n");
}

int main(void)
{

	char string1sys[] = "Aticleworld";
	char *ptr1sys = memchr(string1sys, 'c', sizeof(string1sys));
	check_print(ptr1sys, string1sys);
	printf("---------------\n");

	char string1ft[] = "Aticleworld";
	char *ptr1ft = ft_memchr(string1ft, 'c', sizeof(string1ft));
	check_print(ptr1ft, string1ft);
	printf("---------------\n");

	char string2sys[] = "Aticleworld";
	char *ptr2sys = memchr(string2sys, 'z', 500);
	check_print(ptr2sys, string2sys);
	printf("---------------\n");

	char string2ft[] = "Aticleworld";
	char *ptr2ft = ft_memchr(string2ft, 'z', 500);
	check_print(ptr2ft, string2ft);
	printf("---------------\n");

	char string3sys[] = "Aticleworld";
	char *ptr3sys = memchr(string3sys, 'w', 500);
	check_print(ptr3sys, string3sys);
	printf("---------------\n");

	char string3ft[] = "Aticleworld";
	char *ptr3ft = ft_memchr(string3ft, 'w', 500);
	check_print(ptr3ft, string3ft);
	printf("---------------\n");

	// char *string4sys = NULL;
	// char *ptr4sys = memchr(string4sys, 'w', sizeof(string4sys));
	// check_print(ptr4sys, string4sys);
	// printf("---------------\n");

	// char *string4ft = NULL;
	// char *ptr4ft = ft_memchr(string4ft, 'w', sizeof(string4ft));
	// check_print(ptr4ft, string4ft);
	// printf("---------------\n");

	const char string5sys[] = "http://www.tutorialspoint.com";
	const char match5sys = '.';
	char *ptr5sys = memchr(string5sys, match5sys, strlen(string5sys));
	printf("String after |%c| is - |%s|\n", match5sys, ptr5sys);
	printf("---------------\n");

	const char string5ft[] = "http://www.tutorialspoint.com";
	const char match5ft = '.';
	char *ptr5ft = ft_memchr(string5ft, match5ft, strlen(string5ft));
	printf("String after |%c| is - |%s|\n", match5ft, ptr5ft);
	printf("---------------\n");

	return 0;
}
