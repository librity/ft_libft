/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/06 18:35:38 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	printf("%s\n", ft_strtrim("If money can't buy happiness", " - "));
	printf("----------\n");

	printf("%s\n", ft_strtrim(" - If money can't buy happiness", " - "));
	printf("----------\n");

	printf("%s\n", ft_strtrim("If money can't buy happiness - ", " - "));
	printf("----------\n");

	printf("%s\n", ft_strtrim(" - If money can't buy happiness - ", " - "));
	printf("----------\n");

	printf("%s\n", ft_strtrim("If money can't buy happiness", "If money"));
	printf("----------\n");

	printf("%s\n", ft_strtrim("If money can't buy happiness", "If mone"));
	printf("----------\n");

	printf("%s\n", ft_strtrim("If money can't buy happiness", "If money "));
	printf("----------\n");

	printf("%s\n", ft_strtrim("If money can't buy happiness", "y happiness"));
	printf("----------\n");

	return (0);
}
