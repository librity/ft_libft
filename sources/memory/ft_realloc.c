/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 22:57:20 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/02 15:39:32 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Creates a new allocation of size bytes
** and copies to it the contents of pointer up to size.
*/
void	*ft_realloc(void *pointer, size_t size)
{
	void	*resize;

	resize = malloc(size);
	if (resize == NULL)
		return (NULL);
	ft_memcpy(resize, pointer, size);
	free(pointer);
	return (resize);
}
