/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew_safe.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 01:05:12 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/19 19:46:01 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Creates an isolated and allocated node of a linked list or dies trying.
*/
t_dlist	*ft_dlstnew_safe(void *content)
{
	t_dlist	*list;

	list = (t_dlist *)ft_salloc(sizeof(t_dlist));
	list->content = content;
	list->next = NULL;
	list->prev = NULL;
	return (list);
}
