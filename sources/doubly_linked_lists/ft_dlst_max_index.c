/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_max_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:29:43 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/27 17:54:16 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Returns the maximum indexed of a doubly linked list.
** If the list is empty, returns DLIST_BAD_INDEX_CODE.
*/
int	ft_dlst_max_index(t_dlist *node)
{
	if (node == NULL)
		return (DLIST_BAD_INDEX_CODE);
	return (ft_dlstsize(node) - 1);
}
