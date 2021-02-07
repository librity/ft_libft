/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/06 22:20:21 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	printf("%s|\n", ft_itoa(-2312));
	printf("----------\n");
	printf("%s|\n", ft_itoa(2312));
	printf("----------\n");
	printf("%s|\n", ft_itoa(-231212121));
	printf("----------\n");
	printf("%s|\n", ft_itoa(122312));
	printf("----------\n");
	printf("%s|\n", ft_itoa(0));
	printf("----------\n");
	printf("%s|\n", ft_itoa(42));
	printf("----------\n");

	return (0);
}
