/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/06 21:06:55 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	char **strings;

	strings = ft_split("If money can't buy happyness", 'y');
	while (*strings)
		printf("%s\n", *strings++);
	printf("----------\n");
	while (*strings)
		printf("%s\n", *strings++);
	printf("----------\n");

	strings = ft_split("If money can't buy happyness", 'e');
	while (*strings)
		printf("%s\n", *strings++);
	printf("----------\n");

	strings = ft_split("If money can't buy happyness", '3');
	while (*strings)
		printf("%s\n", *strings++);
	printf("----------\n");

	strings = ft_split("If money can't buy happyness", '\0');
	while (*strings)
		printf("%s\n", *strings++);
	printf("----------\n");

	strings = ft_split("          ", ' ');
	while (*strings)
		printf("%s\n", *strings++);
	printf("----------\n");

	strings = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	while (*strings)
		printf("%s\n", *strings++);
	printf("----------\n");

	strings = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	while (*strings)
		printf("%s\n", *strings++);
	printf("----------\n");

	strings = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	while (*strings)
		printf("%s\n", *strings++);
	printf("----------\n");

	strings = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	while (*strings)
		printf("%s\n", *strings++);
	printf("----------\n");

	return (0);
}
