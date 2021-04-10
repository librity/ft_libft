/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_salloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 22:57:20 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/04/09 23:12:03 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_salloc(size_t size)
{
	void *ptr = malloc(size);

	if (ptr == NULL && (size > 0))
	{
		perror("Unable to allocate required memory.");
		exit(EXIT_FAILURE);
	}
	return ptr;
}
