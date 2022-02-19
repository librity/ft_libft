/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ld.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:24:12 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/19 19:45:47 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void	test(long double number)
{
	int printf_return;

	printf_return = printf("%Lf\n", number);
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%Lf\n", number);
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");
}

int	main(void)
{
	test(0.000001);
	test(42.2);
	test(42.4242);
	test(-42.4242);
	test(42.0);
	test(0.0);
	test(0.1);
	test(-0.1);
	test(1.1);
	test(-1.1);
	test(0.000001);
	test(-0.000001);
	test(0.002220201);
	test(-0.002220201);
	test(42);
	test('L');
	test(424242);
	test(424242424);
	test(-42.4242);

	return (0);
}
