/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/07 00:21:43 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char twice(unsigned int a, char b)
{
	a = 0;
	return (b * 2);
}

char product(unsigned int a, char b)
{
	return (a * b);
}

char squares(unsigned int a, char b)
{
	b = 0;
	return (a * a);
}

char alpha(unsigned int a, char b)
{
	b = 0;
	return (a + 'A');
}

int main(void)
{

	printf("%s|\n", ft_strmapi("123", &twice));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("   ", &twice));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("abcd", &twice));
	printf("----------\n");
	printf("%s|\n", ft_strmapi(" 1 23 ", &twice));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("\n\n\t", &twice));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("123", &product));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("   ", &product));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("abcdkm knkn oj pin12 n1n o3", &product));
	printf("----------\n");
	printf("%s|\n", ft_strmapi(" 1 23 ", &product));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("\n\n\t", &product));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("123", &alpha));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("   ", &alpha));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("abcd", &alpha));
	printf("----------\n");
	printf("%s|\n", ft_strmapi(" 1 23 ", &alpha));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("\n\n\t", &alpha));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("\n\n\tdsad 21eqw dsa12efzxc  223", &squares));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("\n\n\tdsad 21eqw dsa12efzxc  223", &product));
	printf("----------\n");

	return (0);
}
