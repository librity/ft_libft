/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/06 17:33:23 by lpaulo-m         ###   ########.fr       */
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
	char *copy_pointer;

	copy_pointer = strdup(original_string);
	printf("%s\n", copy_pointer);
	printf("----------\n");
	copy_pointer = ft_strdup(original_string);
	printf("%s\n", copy_pointer);
	printf("----------\n");

	char *str = "Helloworld";
	copy_pointer = strdup(str);
	printf("%s\n", copy_pointer);
	printf("----------\n");
	copy_pointer = ft_strdup(str);
	printf("%s\n", copy_pointer);
	printf("----------\n");

	return (0);
}
