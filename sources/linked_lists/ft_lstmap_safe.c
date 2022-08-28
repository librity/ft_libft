/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_safe.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 18:02:11 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/27 21:03:25 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates a new linked list and runs f on each content or dies trying.
 *
 * @param list The linked list.
 * @param f The callback that runs on each node of the list.
 * @return t_list* The first node of the mapped list or NULL.
 */
t_list	*ft_lstmap_safe(t_list *list, void *(*f)(void *))
{
	t_list	*list_map;

	if (list == NULL)
		return (NULL);
	list_map = ft_lstnew_safe(f(list->content));
	list_map->next = ft_lstmap_safe(list->next, f);
	return (list_map);
}
