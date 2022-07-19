/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 18:02:11 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/19 19:45:14 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Creates a new linked list and runs f on all its contents.
** If it fails in creating a node it clears the list with del.
*/
t_dlist	*ft_dlstmap(t_dlist *list, void *(*f)(void *), void (*del)(void *))
{
	t_dlist	*list_map;

	if (list == NULL)
		return (NULL);
	list_map = ft_dlstnew(f(list->content));
	if (list_map == NULL)
	{
		ft_dlstclear(&list_map, del);
		return (NULL);
	}
	list_map->next = ft_dlstmap(list->next, f, del);
	return (list_map);
}
