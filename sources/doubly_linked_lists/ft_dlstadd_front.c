/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:09:06 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/21 13:52:44 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Adds a node to the start of a doubly linked list.
*/
void	ft_dlstadd_front(t_dlist **list, t_dlist *new)
{
	if (list == NULL || new == NULL)
		return ;
	if (*list != NULL)
		(*list)->prev = new;
	new->next = *list;
	new->prev = NULL;
	*list = new;
}
