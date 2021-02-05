/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 00:27:15 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/04 22:18:37 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

int		main(void)
{
	printf("%lu\n", ft_strlen("1234"));
	printf("%lu\n", strlen("1234"));
	printf("--------------\n");

	printf("%lu\n", ft_strlen(""));
	printf("%lu\n", strlen(""));
	printf("--------------\n");

	printf("%lu\n", ft_strlen(" "));
	printf("%lu\n", strlen(" "));
	printf("--------------\n");

	printf("%lu\n", ft_strlen("\0"));
	printf("%lu\n", strlen("\0"));
	printf("--------------\n");

	return (0);
}
