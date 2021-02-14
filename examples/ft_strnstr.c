/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/06 16:15:29 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{

	const char *hay1 = "Foo Bar Baz";
	const char *needle1 = "Bar";

	char *hay2 = "la da\ndoo a da\nnow here comes the stack\nok there it was.\n stackdummy";
	char *needle2 = "stackdummy";

	printf("%s\n", strnstr(hay1, needle1, 4));
	printf("%s\n", ft_strnstr(hay1, needle1, 4));
	printf("---------------\n");

	printf("%s\n", strnstr(hay1, needle1, 10));
	printf("%s\n", ft_strnstr(hay1, needle1, 10));
	printf("---------------\n");

	printf("%s\n", strnstr(hay1, needle1, 0));
	printf("%s\n", ft_strnstr(hay1, needle1, 0));
	printf("---------------\n");

	printf("%s\n", strnstr(hay2, needle2, 10));
	printf("%s\n", ft_strnstr(hay2, needle2, 10));
	printf("---------------\n");

	printf("%s\n", strnstr(hay2, needle2, 70));
	printf("%s\n", ft_strnstr(hay2, needle2, 70));
	printf("---------------\n");

	return 0;
}
