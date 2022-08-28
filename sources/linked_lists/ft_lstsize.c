/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:29:43 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/27 21:21:36 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Counts the nodes in a linked list.
 *
 * @param list The linked list.
 * @return int The size of the list.
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
