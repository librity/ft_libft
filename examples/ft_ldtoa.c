/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldtoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:24:12 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/14 00:02:35 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void	test(long double number)
{
	char	*str;

	str = ft_ldtoa(number);
	printf("EXPECTED: %Le\n", number);
	printf("RESULT: %s\n", str);
	free(str);
	printf("--------\n");
}

int	main(void)
{
	test(0.000001);
	test(42.2);
	test(42.4242);
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
	return (0);
}
