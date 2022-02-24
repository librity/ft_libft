/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits_hex_ui.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:37:30 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/13 16:38:12 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	printf("NUMBER: %x\n", 42);
	printf("DIGITS: %d\n", ft_count_digits_hex_ui(42));
	printf("--------\n");

	printf("NUMBER: %x\n", 10);
	printf("DIGITS: %d\n", ft_count_digits_hex_ui(10));
	printf("--------\n");

	printf("NUMBER: %x\n", 4);
	printf("DIGITS: %d\n", ft_count_digits_hex_ui(4));
	printf("--------\n");

	printf("NUMBER: %x\n", 1);
	printf("DIGITS: %d\n", ft_count_digits_hex_ui(1));
	printf("--------\n");

	printf("NUMBER: %x\n", 0);
	printf("DIGITS: %d\n", ft_count_digits_hex_ui(0));
	printf("--------\n");

	printf("NUMBER: %x\n", -1);
	printf("DIGITS: %d\n", ft_count_digits_hex_ui(-1));
	printf("--------\n");

	printf("NUMBER: %x\n", -9);
	printf("DIGITS: %d\n", ft_count_digits_hex_ui(-9));
	printf("--------\n");

	printf("NUMBER: %x\n", -42);
	printf("DIGITS: %d\n", ft_count_digits_hex_ui(-42));
	printf("--------\n");

	printf("NUMBER: %x\n", -3000);
	printf("DIGITS: %d\n", ft_count_digits_hex_ui(-3000));
	printf("--------\n");

	printf("NUMBER: %x\n", 3333333);
	printf("DIGITS: %d\n", ft_count_digits_hex_ui(3333333));
	printf("--------\n");

	printf("NUMBER: %x\n", 9012);
	printf("DIGITS: %d\n", ft_count_digits_hex_ui(9012));
	printf("--------\n");

	int test;
	int max;
	int increment;

	test = -300;
	max = -test;
	increment = 1;

	while (test < max)
	{
		printf("NUMBER: %x\n", test);
		printf("DIGITS: %d\n", ft_count_digits_hex_ui(test));
		printf("--------\n");

		test += increment;
	}

	return (0);
}
