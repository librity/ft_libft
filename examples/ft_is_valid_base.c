/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:55:46 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/19 22:14:50 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	printf("\n-------- GOOD --------\n");

	printf("%s\n", DECIMAL_BASE);
	printf("%d\n", ft_is_valid_base(DECIMAL_BASE, 10));
	printf("---------------\n");

	printf("%s\n", LOWERCASE_HEX_BASE);
	printf("%d\n", ft_is_valid_base(LOWERCASE_HEX_BASE, 16));
	printf("---------------\n");

	printf("%s\n", UPPERCASE_HEX_BASE);
	printf("%d\n", ft_is_valid_base(UPPERCASE_HEX_BASE, 16));
	printf("---------------\n");

	char *good_base = "go0d";
	printf("%s\n", good_base);
	printf("%d\n", ft_is_valid_base(good_base, 4));
	printf("---------------\n");

	good_base = "go0d";
	printf("%s\n", good_base);
	printf("%d\n", ft_is_valid_base(good_base, 4));
	printf("---------------\n");

	printf("\n-------- BAD --------\n");

	char *bad_base = "BBAD";
	printf("%s\n", bad_base);
	printf("%d\n", ft_is_valid_base(bad_base, 4));
	printf("---------------\n");

	bad_base = "-2";
	printf("%s\n", bad_base);
	printf("%d\n", ft_is_valid_base(bad_base, 1));
	printf("---------------\n");

	bad_base = "B";
	printf("%s\n", bad_base);
	printf("%d\n", ft_is_valid_base(bad_base, 1));
	printf("---------------\n");

	bad_base = "";
	printf("%s\n", bad_base);
	printf("%d\n", ft_is_valid_base(bad_base, 0));
	printf("---------------\n");

	bad_base = "-36";
	printf("%s\n", bad_base);
	printf("%d\n", ft_is_valid_base(bad_base, 3));
	printf("---------------\n");

	bad_base = "";
	printf("%s\n", bad_base);
	printf("%d\n", ft_is_valid_base(bad_base, 16));
	printf("---------------\n");

	return (0);
}
