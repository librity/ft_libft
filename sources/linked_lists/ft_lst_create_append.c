/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_create_append.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 21:13:08 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/21 13:16:10 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Creates a new node wih the pointer.
** If the linked list is initialized, appends the node to the list.
** If uninitialized, sets the node as first on the list.
*/
void	ft_lst_create_append(t_list **list, void *pointer)
{
	if (*list == NULL)
		return (ft_lst_init(list, pointer));
	ft_lst_append(list, pointer);
}
