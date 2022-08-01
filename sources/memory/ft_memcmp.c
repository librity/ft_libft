/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:59:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/31 23:23:20 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Compares the first n bytes of s1 with the first n bytes of s2.
** If any one byte is different, returns *s1 - *s2.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*first_cast;
	unsigned char	*second_cast;

	first_cast = (unsigned char *)s1;
	second_cast = (unsigned char *)s2;
	while (n--)
	{
		if (*first_cast != *second_cast)
			return (*first_cast - *second_cast);
		first_cast++;
		second_cast++;
	}
	return (0);
}
