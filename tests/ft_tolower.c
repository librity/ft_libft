/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/06 16:59:31 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	printf("%d\n", tolower('c'));
	printf("%d\n", ft_tolower('c'));
	printf("---------------\n");

	printf("%d\n", tolower('X'));
	printf("%d\n", ft_tolower('X'));
	printf("---------------\n");

	printf("%d\n", tolower('7'));
	printf("%d\n", ft_tolower('7'));
	printf("---------------\n");

	printf("%d\n", tolower('~'));
	printf("%d\n", ft_tolower('~'));
	printf("---------------\n");

	printf("%d\n", tolower('\15'));
	printf("%d\n", ft_tolower('\15'));
	printf("---------------\n");

	printf("%d\n", tolower('\10'));
	printf("%d\n", ft_tolower('\10'));
	printf("---------------\n");

	printf("%d\n", tolower('\30'));
	printf("%d\n", ft_tolower('\30'));
	printf("---------------\n");

	printf("%d\n", tolower('\0'));
	printf("%d\n", ft_tolower('\0'));
	printf("---------------\n");

	printf("%d\n", tolower('\30'));
	printf("%d\n", ft_tolower('\30'));
	printf("---------------\n");

	printf("%d\n", tolower('z'));
	printf("%d\n", ft_tolower('z'));
	printf("---------------\n");

	printf("%d\n", tolower('L'));
	printf("%d\n", ft_tolower('L'));
	printf("---------------\n");

	printf("%d\n", tolower('['));
	printf("%d\n", ft_tolower('['));
	printf("---------------\n");

	printf("%d\n", tolower('|'));
	printf("%d\n", ft_tolower('|'));
	printf("---------------\n");

	printf("%d\n", tolower('&'));
	printf("%d\n", ft_tolower('&'));
	printf("---------------\n");

	printf("%d\n", tolower('0'));
	printf("%d\n", ft_tolower('0'));
	printf("---------------\n");

	printf("%d\n", tolower('1'));
	printf("%d\n", ft_tolower('1'));
	printf("---------------\n");

	printf("%d\n", tolower(1000));
	printf("%d\n", ft_tolower(1000));
	printf("---------------\n");

	printf("%d\n", tolower(-1000));
	printf("%d\n", ft_tolower(-1000));
	printf("---------------\n");

	return 0;
}
