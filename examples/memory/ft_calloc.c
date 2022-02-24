/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/06 17:16:58 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	int i, n;
	int *a;

	printf("Number of elements to be entered:");
	scanf("%d", &n);

	a = (int *)ft_calloc(n, sizeof(int));
	printf("Allocated memory contents: ");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);

	printf("Enter %d numbers:\n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	printf("The numbers entered are: ");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);

	free(a);

	return (0);
}
