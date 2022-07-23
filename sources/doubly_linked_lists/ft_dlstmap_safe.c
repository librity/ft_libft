/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstmap_safe.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 18:02:11 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/22 22:01:16 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Creates a new doubly linked list and runs f on each content or dies trying.
*/
t_dlist	*ft_dlstmap_safe(t_dlist *list, void *(*f)(void *))
{
	t_dlist	*list_map;

	if (list == NULL)
		return (NULL);
	list_map = ft_dlstnew_safe(f(list->content));
	list_map->next = ft_dlstmap_safe(list->next, f);
	if (list_map->next != NULL)
		list_map->next->prev = list_map;
	return (list_map);
}
