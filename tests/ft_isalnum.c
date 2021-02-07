/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/06 16:38:41 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	printf("%d\n", isalnum('c'));
	printf("%d\n", ft_isalnum('c'));
	printf("---------------\n");

	printf("%d\n", isalnum('X'));
	printf("%d\n", ft_isalnum('X'));
	printf("---------------\n");

	printf("%d\n", isalnum('7'));
	printf("%d\n", ft_isalnum('7'));
	printf("---------------\n");

	printf("%d\n", isalnum('\0'));
	printf("%d\n", ft_isalnum('\0'));
	printf("---------------\n");

	printf("%d\n", isalnum('\30'));
	printf("%d\n", ft_isalnum('\30'));
	printf("---------------\n");

	printf("%d\n", isalnum('z'));
	printf("%d\n", ft_isalnum('z'));
	printf("---------------\n");

	printf("%d\n", isalnum('L'));
	printf("%d\n", ft_isalnum('L'));
	printf("---------------\n");

	printf("%d\n", isalnum('['));
	printf("%d\n", ft_isalnum('['));
	printf("---------------\n");

	printf("%d\n", isalnum('|'));
	printf("%d\n", ft_isalnum('|'));
	printf("---------------\n");

	printf("%d\n", isalnum('&'));
	printf("%d\n", ft_isalnum('&'));
	printf("---------------\n");

	printf("%d\n", isalnum('0'));
	printf("%d\n", ft_isalnum('0'));
	printf("---------------\n");

	printf("%d\n", isalnum('1'));
	printf("%d\n", ft_isalnum('1'));
	printf("---------------\n");

	return 0;
}
