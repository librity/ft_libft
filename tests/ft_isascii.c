/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/06 16:47:58 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	printf("%d\n", isascii('c'));
	printf("%d\n", ft_isascii('c'));
	printf("---------------\n");

	printf("%d\n", isascii('X'));
	printf("%d\n", ft_isascii('X'));
	printf("---------------\n");

	printf("%d\n", isascii('7'));
	printf("%d\n", ft_isascii('7'));
	printf("---------------\n");

	printf("%d\n", isascii('~'));
	printf("%d\n", ft_isascii('~'));
	printf("---------------\n");

	printf("%d\n", isascii('\15'));
	printf("%d\n", ft_isascii('\15'));
	printf("---------------\n");

	printf("%d\n", isascii('\10'));
	printf("%d\n", ft_isascii('\10'));
	printf("---------------\n");

	printf("%d\n", isascii('\30'));
	printf("%d\n", ft_isascii('\30'));
	printf("---------------\n");

	printf("%d\n", isascii('\0'));
	printf("%d\n", ft_isascii('\0'));
	printf("---------------\n");

	printf("%d\n", isascii('\30'));
	printf("%d\n", ft_isascii('\30'));
	printf("---------------\n");

	printf("%d\n", isascii('z'));
	printf("%d\n", ft_isascii('z'));
	printf("---------------\n");

	printf("%d\n", isascii('L'));
	printf("%d\n", ft_isascii('L'));
	printf("---------------\n");

	printf("%d\n", isascii('['));
	printf("%d\n", ft_isascii('['));
	printf("---------------\n");

	printf("%d\n", isascii('|'));
	printf("%d\n", ft_isascii('|'));
	printf("---------------\n");

	printf("%d\n", isascii('&'));
	printf("%d\n", ft_isascii('&'));
	printf("---------------\n");

	printf("%d\n", isascii('0'));
	printf("%d\n", ft_isascii('0'));
	printf("---------------\n");

	printf("%d\n", isascii('1'));
	printf("%d\n", ft_isascii('1'));
	printf("---------------\n");

	printf("%d\n", isascii(1000));
	printf("%d\n", ft_isascii(1000));
	printf("---------------\n");

	printf("%d\n", isascii(-1000));
	printf("%d\n", ft_isascii(-1000));
	printf("---------------\n");

	return 0;
}
