/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_pluck_last.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 01:05:12 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/21 21:50:15 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Extracts and returns the trimmed last node of a doubly linked list.
*/
t_dlist	*ft_dlst_pluck_last(t_dlist **list)
{
	t_dlist	*last;
	t_dlist	*second_last;

	if (list == NULL || *list == NULL)
		return (NULL);
	last = ft_dlstlast(*list);
	second_last = last->prev;
	ft_dlst_trim_next(second_last);
	if (second_last == NULL)
		*list = NULL;
	ft_dlst_trim(last);
	return (last);
}
