/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_addb_lalloc.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:43:25 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/30 15:09:42 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Creates a new node wih the content.
** If the doubly linked list is initialized, prepends the node to the list.
** If uninitialized, sets the node as first on the list.
*/
void	ft_dlst_addb_lalloc(t_list **lalloc,
			t_dlist **list, void *content)
{
	ft_dlst_cadd_back_lalloc(lalloc, list, content);
}
