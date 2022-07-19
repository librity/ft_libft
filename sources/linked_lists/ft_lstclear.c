/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:12:52 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/19 19:38:59 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Runs the del function on all the contents of a linked list,
** then frees every node on the and sets the first pointer to NULL.
*/
void	ft_lstclear(t_list **list, void (*del)(void *))
{
	t_list	*next;

	if (list == NULL)
		return ;
	while (*list != NULL)
	{
		next = (*list)->next;
		ft_lstdelone(*list, del);
		*list = next;
	}
	list = NULL;
}
