/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/06 16:58:38 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	printf("%d\n", toupper('c'));
	printf("%d\n", ft_toupper('c'));
	printf("---------------\n");

	printf("%d\n", toupper('X'));
	printf("%d\n", ft_toupper('X'));
	printf("---------------\n");

	printf("%d\n", toupper('7'));
	printf("%d\n", ft_toupper('7'));
	printf("---------------\n");

	printf("%d\n", toupper('~'));
	printf("%d\n", ft_toupper('~'));
	printf("---------------\n");

	printf("%d\n", toupper('\15'));
	printf("%d\n", ft_toupper('\15'));
	printf("---------------\n");

	printf("%d\n", toupper('\10'));
	printf("%d\n", ft_toupper('\10'));
	printf("---------------\n");

	printf("%d\n", toupper('\30'));
	printf("%d\n", ft_toupper('\30'));
	printf("---------------\n");

	printf("%d\n", toupper('\0'));
	printf("%d\n", ft_toupper('\0'));
	printf("---------------\n");

	printf("%d\n", toupper('\30'));
	printf("%d\n", ft_toupper('\30'));
	printf("---------------\n");

	printf("%d\n", toupper('z'));
	printf("%d\n", ft_toupper('z'));
	printf("---------------\n");

	printf("%d\n", toupper('L'));
	printf("%d\n", ft_toupper('L'));
	printf("---------------\n");

	printf("%d\n", toupper('['));
	printf("%d\n", ft_toupper('['));
	printf("---------------\n");

	printf("%d\n", toupper('|'));
	printf("%d\n", ft_toupper('|'));
	printf("---------------\n");

	printf("%d\n", toupper('&'));
	printf("%d\n", ft_toupper('&'));
	printf("---------------\n");

	printf("%d\n", toupper('0'));
	printf("%d\n", ft_toupper('0'));
	printf("---------------\n");

	printf("%d\n", toupper('1'));
	printf("%d\n", ft_toupper('1'));
	printf("---------------\n");

	printf("%d\n", toupper(1000));
	printf("%d\n", ft_toupper(1000));
	printf("---------------\n");

	printf("%d\n", toupper(-1000));
	printf("%d\n", ft_toupper(-1000));
	printf("---------------\n");

	return 0;
}
