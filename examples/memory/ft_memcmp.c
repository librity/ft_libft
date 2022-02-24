/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/06 12:53:16 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{

	char str1sys1[15] = "Hello";
	char str1sys2[15] = "Aticleworld";
	int ret1sys = memcmp(str1sys1, str1sys2, 5);
	printf("%d\n", ret1sys);
	printf("---------------\n");

	char str1ft1[15] = "Hello";
	char str1ft2[15] = "Aticleworld";
	int ret1ft = ft_memcmp(str1ft1, str1ft2, 5);
	printf("%d\n", ret1ft);
	printf("---------------\n");

	char arr2sys1[] = {1, 2, 3, 4};
	char arr2sys2[] = {1, 2, 3, 4};
	int ret2sys = memcmp(arr2sys1, arr2sys2, 4);
	printf("%d\n", ret2sys);
	printf("---------------\n");

	char arr2ft1[] = {1, 2, 3, 4};
	char arr2ft2[] = {1, 2, 3, 4};
	int ret2ft = ft_memcmp(arr2ft1, arr2ft2, 4);
	printf("%d\n", ret2ft);
	printf("---------------\n");

	printf("%d\n", memcmp("abc", "abc", 2));
	printf("%d\n", ft_memcmp("abc", "abc", 2));
	printf("---------------\n");

	printf("%d\n", memcmp("bca", "abc", 2));
	printf("%d\n", ft_memcmp("bca", "abc", 2));
	printf("---------------\n");

	printf("%d\n", memcmp("abc", "bca", 2));
	printf("%d\n", ft_memcmp("abc", "bca", 2));
	printf("---------------\n");

	return 0;
}
