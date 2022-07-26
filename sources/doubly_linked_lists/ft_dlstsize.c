/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:29:43 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/26 15:03:54 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Counts the nodes in a doubly linked list.
*/
int	ft_dlstsize(t_dlist *node)
{
	int	list_size;

	if (node == NULL)
		return (0);
	list_size = 1;
	while (node->next != NULL)
	{
		list_size++;
		node = node->next;
	}
	return (list_size);
}
