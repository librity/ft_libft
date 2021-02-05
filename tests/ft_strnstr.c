/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 12:33:58 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/04 22:18:29 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

int main(void) {
	char *searchingFor = "stackdummy";
	char *in = "la da\ndoo a da\nnow here comes the stack\nok there it was.\n";

	printf("found: %s\n", strnstr(in, searchingFor, 5) ? "yes" : "no");
	printf("found: %s\n", strnstr(in, searchingFor, 5) ? "yes" : "no");
	printf("found: %s\n", strnstr(in, searchingFor, 5) ? "yes" : "no");
	return 0;
}