/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pluck_first.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 01:05:12 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/21 22:21:30 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Extracts and returns the trimmed first node of a linked list.
*/
t_list	*ft_lst_pluck_first(t_list **list)
{
	t_list	*first;
	t_list	*second;

	if (list == NULL || *list == NULL)
		return (NULL);
	first = *list;
	second = first->next;
	ft_lst_trim(first);
	*list = second;
	return (first);
}
