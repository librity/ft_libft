/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:15:15 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/29 19:45:47 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Counts how many pointers a NULL-terminated array has excluding NULL.
*/
size_t	ft_arr_len(void **array)
{
	size_t	length;

	if (array == NULL)
		return (0);
	length = 0;
	while (array[length])
		length++;
	return (length);
}
