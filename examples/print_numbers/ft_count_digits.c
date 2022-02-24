/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:24:12 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/13 16:36:39 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	printf("NUMBER: %d\n", 42);
	printf("DIGITS: %d\n", ft_count_digits(42));
	printf("--------\n");

	printf("NUMBER: %d\n", 10);
	printf("DIGITS: %d\n", ft_count_digits(10));
	printf("--------\n");

	printf("NUMBER: %d\n", 4);
	printf("DIGITS: %d\n", ft_count_digits(4));
	printf("--------\n");

	printf("NUMBER: %d\n", 1);
	printf("DIGITS: %d\n", ft_count_digits(1));
	printf("--------\n");

	printf("NUMBER: %d\n", 0);
	printf("DIGITS: %d\n", ft_count_digits(0));
	printf("--------\n");

	printf("NUMBER: %d\n", -1);
	printf("DIGITS: %d\n", ft_count_digits(-1));
	printf("--------\n");

	printf("NUMBER: %d\n", -9);
	printf("DIGITS: %d\n", ft_count_digits(-9));
	printf("--------\n");

	printf("NUMBER: %d\n", -42);
	printf("DIGITS: %d\n", ft_count_digits(-42));
	printf("--------\n");

	printf("NUMBER: %d\n", -3000);
	printf("DIGITS: %d\n", ft_count_digits(-3000));
	printf("--------\n");

	printf("NUMBER: %d\n", 3333333);
	printf("DIGITS: %d\n", ft_count_digits(3333333));
	printf("--------\n");

	printf("NUMBER: %d\n", 9012);
	printf("DIGITS: %d\n", ft_count_digits(9012));
	printf("--------\n");

	int test;
	int max;
	int increment;

	test = -300;
	max = -test;
	increment = 1;

	while (test < max)
	{
		printf("NUMBER: %d\n", test);
		printf("DIGITS: %d\n", ft_count_digits(test));
		printf("--------\n");

		test += increment;
	}

	return (0);
}
