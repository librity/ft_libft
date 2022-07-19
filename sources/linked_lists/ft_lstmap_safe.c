/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_safe.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 18:02:11 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/19 19:39:26 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Creates a new linked list and runs f on all its contents or dies trying.
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
