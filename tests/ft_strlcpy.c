/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:24:12 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/05 00:29:25 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

#include <stdio.h>
#include <string.h>

int main(void)
{
	unsigned int first_length = 25;
	char original_string[25] = "Success\n";
	char destination_string[25] = "Garb\n";

	unsigned int second_length = 2;
	char original_string_2[2] = "2";
	char destination_string_2[2] = "";

	unsigned int third_length = 1;
	char original_string_3[1] = "";
	char destination_string_3[1] = " ";
	unsigned int return_length;

	printf("%s\n", original_string);
	printf("%s\n", destination_string);
	return_length = ft_strlcpy(destination_string, original_string, first_length);
	printf("%s\n", original_string);
	printf("%s\n", destination_string);
	printf("%d\n", return_length);

	printf("---------------\n");

	printf("%s\n", original_string_2);
	printf("%s\n", destination_string_2);
	return_length = ft_strlcpy(destination_string_2, original_string_2, second_length);
	printf("%s\n", original_string_2);
	printf("%s\n", destination_string_2);
	printf("%d\n", return_length);

	printf("---------------\n");

	printf("%s|\n", original_string_3);
	printf("%s|\n", destination_string_3);
	return_length = ft_strlcpy(destination_string_3, original_string_3, third_length);
	printf("%s|\n", original_string_3);
	printf("%s|\n", destination_string_3);
	printf("%d\n", return_length);

	return (0);
}
