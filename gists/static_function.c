/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static_example.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 21:35:43 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/04 21:35:46 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static long int getSquare(int num)
{
	return (num * num);
}

int main()
{
	int num;
	printf("Enter an integer number: ");
	scanf("%d", &num);
	printf("Square of %d is %ld.\n", num, getSquare(num));

	return 0;
}
