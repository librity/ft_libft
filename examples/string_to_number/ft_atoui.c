/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoui.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:24:12 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/13 16:22:17 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	printf("%d\n", ft_atoui("42"));
	printf("%d\n", atoi("42"));
	printf("--------\n");

	printf("%d\n", ft_atoui(" 	42"));
	printf("%d\n", atoi(" 	42"));
	printf("--------\n");

	printf("%d\n", ft_atoui(" 	-42"));
	printf("%d\n", atoi(" 	-42"));
	printf("--------\n");

	printf("%d\n", ft_atoui(" 	--42"));
	printf("%d\n", atoi(" 	--42"));
	printf("--------\n");

	printf("%d\n", ft_atoui("-123"));
	printf("%d\n", atoi("-123"));
	printf("--------\n");

	printf("%d\n", ft_atoui("98993489"));
	printf("%d\n", atoi("98993489"));
	printf("--------\n");

	printf("%d\n", ft_atoui("-2147483648"));
	printf("%d\n", atoi("-2147483648"));
	printf("--------\n");
	printf("%d\n", ft_atoui("2147483647"));
	printf("%d\n", atoi("2147483647"));
	printf("--------\n");

	printf("%d\n", ft_atoui("tutorialspoint.com"));
	printf("%d\n", atoi("tutorialspoint.com"));
	printf("--------\n");

	printf("%d\n", ft_atoui("  \t\r--451"));
	printf("%d\n", atoi("  \t\r--451"));
	printf("--------\n");

	printf("%d\n", ft_atoui("  ---+--+1234ab567"));
	printf("%d\n", atoi("  ---+--+1234ab567"));
	printf("--------\n");

	printf("%d\n", ft_atoui("  ---+--+--+6451-1ab567"));
	printf("%d\n", atoi("  ---+--+--+6451-1ab567"));
	printf("--------\n");

	return (0);
}
