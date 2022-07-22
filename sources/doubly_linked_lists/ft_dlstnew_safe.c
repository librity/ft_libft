/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew_safe.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 01:05:12 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/21 21:17:36 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Creates an isolated and allocated node of a doubly linked list or dies trying.
*/
t_dlist	*ft_dlstnew_safe(void *content)
{
	t_dlist	*list;

	list = (t_dlist *)ft_salloc(sizeof(t_dlist));
	list->content = content;
	ft_dlst_trim(list);
	return (list);
}
