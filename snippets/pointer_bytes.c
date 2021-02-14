/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_bytes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 18:52:38 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/13 21:14:29 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *test_char = 0;
	test_char++;
	printf("---- char ----\n");
	printf("%p\n", test_char);
	test_char++;
	printf("%p\n", test_char);
	test_char++;
	printf("%p\n", test_char);
	printf("---- char ----\n");

	int *test_int = 0;
	test_int++;
	printf("---- int ----\n");
	printf("%p\n", test_int);
	test_int++;
	printf("%p\n", test_int);
	test_int++;
	printf("%p\n", test_int);
	printf("---- int ----\n");

	unsigned long *test_ulong = 0;
	test_ulong++;
	printf("---- unsigned long ----\n");
	printf("%p\n", test_ulong);
	test_ulong++;
	printf("%p\n", test_ulong);
	test_ulong++;
	printf("%p\n", test_ulong);
	printf("---- unsigned long ----\n");

	float *test_float = 0;
	test_float++;
	printf("---- float ----\n");
	printf("%p\n", test_float);
	test_float++;
	printf("%p\n", test_float);
	test_float++;
	printf("%p\n", test_float);
	printf("---- float ----\n");

	long double *test_ldouble = 0;
	test_ldouble++;
	printf("---- long double ----\n");
	printf("%p\n", test_ldouble);
	test_ldouble++;
	printf("%p\n", test_ldouble);
	test_ldouble++;
	printf("%p\n", test_ldouble);
	printf("---- long double ----\n");

	return (0);
}
