/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/06 18:03:08 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	char original_string[100] = "If money can't buy happiness then why is it so fabulous?";

	printf("%s\n", ft_substr(original_string, 5, 10));
	printf("----------\n");

	printf("%s\n", ft_substr(original_string, 1, 2));
	printf("----------\n");

	printf("%s\n", ft_substr(original_string, 100, 123));
	printf("----------\n");

	printf("%s\n", ft_substr(original_string, 0, 0));
	printf("----------\n");

	printf("%s\n", ft_substr(NULL, 2, 4));
	printf("----------\n");

	return (0);
}
