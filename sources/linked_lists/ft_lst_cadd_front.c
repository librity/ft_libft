/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_cadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 21:13:08 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/21 15:11:27 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Creates a new node wih the content.
** If the linked list is initialized, appends the node to the list.
** If uninitialized, sets the node as first on the list.
*/
void	ft_lst_cadd_front(t_list **list, void *content)
{
	if (*list == NULL)
		return (ft_lst_init(list, content));
	ft_lst_append(list, content);
}