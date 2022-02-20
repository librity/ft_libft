/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_safe.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 01:05:12 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/19 21:52:28 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Creates an isolated and allocated node of a linked list or dies trying.
*/
t_list	*ft_lstnew_safe(void *content)
{
	t_list	*list;

	list = (t_list *)ft_salloc(sizeof(t_list));
	list->content = content;
	list->next = NULL;
	return (list);
}
