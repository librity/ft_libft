/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_cadd_back_lalloc.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:43:25 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/21 23:30:13 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Creates a new node wih the content.
** If the doubly linked list is initialized, prepends the node to the list.
** If uninitialized, sets the node as first on the list.
** Then adds node to lalloc.
*/
void	ft_dlst_cadd_back_lalloc(t_list **lalloc,
			t_dlist **list, void *content)
{
	t_dlist	*new;

	if (list == NULL)
		return ;
	new = ft_dlstnew_safe(content);
	ft_dlstadd_back(list, new);
	ft_add_lalloc(lalloc, new);
}
