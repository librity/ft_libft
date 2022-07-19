/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:29:43 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/19 19:39:43 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Counts how many nodes are in a linked list.
*/
int	ft_lstsize(t_list *list)
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
