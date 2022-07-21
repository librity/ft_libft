/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:29:43 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/21 13:28:48 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Counts the nodes in a doubly linked list.
*/
int	ft_dlstsize(t_dlist *list)
{
	int	list_size;

	if (list == NULL)
		return (0);
	list_size = 1;
	while (list->next != NULL)
	{
		list_size++;
		list = list->next;
	}
	return (list_size);
}
