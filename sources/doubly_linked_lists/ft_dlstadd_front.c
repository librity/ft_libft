/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:09:06 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/19 20:06:25 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Appends a node to the start of a linked list.
*/
void	ft_dlstadd_front(t_dlist **list, t_dlist *new)
{
	if (list == NULL || new == NULL)
		return ;
	(*list)->prev = new;
	new->next = *list;
	new->prev = NULL;
	*list = new;
}
