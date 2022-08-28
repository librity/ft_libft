/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_pluck.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 01:05:12 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/27 21:21:36 by lpaulo-m         ###   ########.fr       */
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

/**
 * @brief Extracts the zero-indexed node of a doubly linked list.
 * If list is uninitialized or empty returns, returns NULL.
 * If index is out of bounds, returns NULL.
 *
 * @param list The doubly linked list.
 * @param index The index of the node.
 * @return t_dlist* The node.
 */
t_dlist	*ft_dlst_pluck(t_dlist **list, int index)
{
	t_dlist	*target;

	if (list == NULL || *list == NULL)
		return (NULL);
	if (index == 0)
		return (ft_dlst_pluck_first(list));
	if (index == ft_dlst_max_index(*list))
		return (ft_dlst_pluck_last(list));
	target = ft_dlst_get(list, index);
	if (target == NULL)
		return (NULL);
	relink(target);
	ft_dlst_trim(target);
	return (target);
}
