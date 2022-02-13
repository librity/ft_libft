/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:24:12 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/13 18:06:12 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	printf("EXPECTED: %f\n", 0.2);
	printf("RESULT: %f\n", ft_map_d((t_map_d){200, 0, 1000, 0, 1}));
	printf("--------\n");

	printf("EXPECTED: %f\n", 0.02);
	printf("RESULT: %f\n", ft_map_d((t_map_d){20, 0, 1000, 0, 1}));
	printf("--------\n");

	printf("EXPECTED: %f\n", 2.0);
	printf("RESULT: %f\n", ft_map_d((t_map_d){2000, 0, 1000, 0, 1}));
	printf("--------\n");

	printf("EXPECTED: %f\n", -0.1);
	printf("RESULT: %f\n", ft_map_d((t_map_d){-100, 0, 1000, 0, 1}));
	printf("--------\n");

	printf("EXPECTED: %f\n", 1.0);
	printf("RESULT: %f\n", ft_map_d((t_map_d){2, 0, 2, 0, 1}));
	printf("--------\n");

	return (0);
}
