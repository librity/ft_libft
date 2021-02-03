/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_t_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 00:27:09 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/03 00:36:09 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("%lu\n", sizeof(char));

	printf("%lu\n", sizeof(int));

	printf("%lu\n", sizeof(unsigned long));
	printf("%lu\n", sizeof(size_t));

	printf("%lu\n", sizeof(unsigned long long));

	return (0);
}
