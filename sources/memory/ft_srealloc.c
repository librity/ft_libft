/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srealloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 22:57:20 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/05 02:18:37 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Creates a new allocation of size bytes
** and copies to it the contents of pointer up to size.
** If allocation fails it terminates the program with an error.
*/
void	*ft_srealloc(void *pointer, size_t old_size, size_t new_size)
{
	void	*resize;

	resize = ft_salloc(new_size);
	if (pointer == NULL)
		return (resize);
	if (old_size == 0)
		return (resize);
	ft_memcpy(resize, pointer, old_size);
	free(pointer);
	return (resize);
}