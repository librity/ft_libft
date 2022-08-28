/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstlast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:48:24 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/27 21:03:25 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Return last node of a doubly linked list.
 *
 * @param node The first node of the doubly linked list.
 * @return t_dlist* The last node or null.
 */
t_dlist	*ft_dlstlast(t_dlist *node)
{
	if (node == NULL)
		return (NULL);
	if (node->next == NULL)
		return (NULL);
	return (ft_dlstlast(node->next));
}
