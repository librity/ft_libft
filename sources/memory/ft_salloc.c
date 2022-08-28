/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_salloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 22:57:20 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/27 21:03:25 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Safe malloc: if allocation fails it terminates the program with an error.
 *
 * @param size The number of bytes to be allocated.
 * @return void* The addres of the allocated memory.
 */
void	*ft_salloc(size_t size)
{
	void	*pointer;

	pointer = malloc(size);
	if (pointer == NULL && (size > 0))
		ft_die(SALLOC_ERR);
	return (pointer);
}
