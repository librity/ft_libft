/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_prepend.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:57:45 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/19 19:45:19 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Creates a node and appends it to the beginning of a linked list.
*/
void	ft_dlst_prepend(t_dlist **list, void *content)
{
	t_dlist	*new;

	if (list == NULL || *list == NULL)
		return ;
	new = ft_dlstnew_safe(content);
	ft_dlstadd_front(list, new);
}
