/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:12:52 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/21 15:05:09 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Runs the del function on all the contents of a doubly linked list,
** frees every node and uninitializes the list.
*/
void	ft_dlstclear(t_dlist **list, void (*del)(void *))
{
	t_dlist	*next;

	if (list == NULL)
		return ;
	while (*list != NULL)
	{
		next = (*list)->next;
		ft_dlstdelone(*list, del);
		*list = next;
	}
	list = NULL;
}
