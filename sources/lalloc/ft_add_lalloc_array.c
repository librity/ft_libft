/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_lalloc_array.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 21:13:08 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/21 15:00:35 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Add the allocated pointer array and all of its addresses to the lalloc.
*/
void	ft_add_lalloc_array(t_list **lalloc, void **allocated_array)
{
	if (allocated_array == NULL)
		return ;
	ft_add_lalloc(lalloc, allocated_array);
	while (*allocated_array != NULL)
	{
		ft_add_lalloc(lalloc, *allocated_array);
		allocated_array++;
	}
}
