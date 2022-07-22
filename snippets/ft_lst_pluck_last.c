/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pluck_last.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 01:05:12 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/21 22:21:13 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

t_list	*ft_lst_n(t_list *list, int index)
{
	while (index >= 0)
	{
		if (list == NULL)
			return (NULL);
		if (index == 0)
			return (list);
		list = list->next;
		index--;
	}
	return (NULL);
}

/*
** Extracts and returns the trimmed last node of a linked list.
*/
t_list	*ft_lst_pluck_last(t_list **list)
{
	t_list	*last;
	t_list	*second_last;

	if (list == NULL || *list == NULL)
		return (NULL);
	last = ft_lstlast(*list);
	second_last = last->prev;
	ft_lst_trim_next(second_last);
	if (second_last == NULL)
		*list = NULL;
	ft_lst_trim(last);
	return (last);
}
