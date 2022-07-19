/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:12:52 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/19 19:45:17 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Runs the del function on all the contents of a linked list,
** then frees every node on the and sets the first pointer to NULL.
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
