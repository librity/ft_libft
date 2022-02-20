/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 02:32:09 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/19 22:36:05 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Copies a null-terminated string to an arbitrary location.
*/
char	*ft_strcpy(char *dest, char *src)
{
	char	*initial_destination;

	initial_destination = dest;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (initial_destination);
}
