/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:48:24 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/19 19:39:14 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Return last node of a linked list.
*/
t_list	*ft_lstlast(t_list *list)
{
	if (list == NULL || list->next == NULL)
		return (list);
	return (ft_lstlast(list->next));
}
