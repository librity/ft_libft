/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:48:24 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/25 21:38:07 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
**
*/

/**
 * @brief Return last node of a linked list.
 *
 * @param list The linked list.
 * @return t_list* The last node of the list or NULL.
 */
t_list	*ft_lstlast(t_list *list)
{
	if (list == NULL)
		return (NULL);
	if (list->next == NULL)
		return (NULL);
	return (ft_lstlast(list->next));
}
