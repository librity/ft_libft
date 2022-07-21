/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_create_append.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:43:25 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/21 13:22:13 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Creates a new node wih the pointer.
** If the doubly linked list is initialized, appends the node to the list.
** If uninitialized, sets the node as first on the list.
*/
void	ft_dlst_create_append(t_dlist **list, void *pointer)
{
	if (*list == NULL)
		return (ft_dlst_init(list, pointer));
	ft_dlst_append(list, pointer);
}
