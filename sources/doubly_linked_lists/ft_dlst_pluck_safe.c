/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_pluck_safe.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 01:05:12 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/26 17:33:27 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	relink(t_dlist *target)
{
	t_dlist	*previous;
	t_dlist	*next;

	previous = target->prev;
	next = target->next;
	previous->next = next;
	next->prev = previous;
}

/*
** Extracts the zero-indexed node of a doubly linked list.
** If list is uninitialized or empty returns,
** terminates the program with an error.
** If index is out of bounds, terminates the program with an error.
*/
t_dlist	*ft_dlst_pluck_safe(t_dlist **list, int index)
{
	t_dlist	*target;

	target = ft_dlst_get_safe(list, index);
	if (target == NULL)
		return (NULL);
	relink(target);
	ft_dlst_trim(target);
	return (target);
}