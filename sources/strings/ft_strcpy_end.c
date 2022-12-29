/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 02:32:09 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/12/29 17:08:31 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Copies a C-string to an arbitrary location
 * and returns the string end's address.
 *
 * @param dest The destination address.
 * @param src The source address.
 * @return char* The end of the copied string in the destination.
 */
char	*ft_strcpy_end(char *dest, char *src)
{
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}
