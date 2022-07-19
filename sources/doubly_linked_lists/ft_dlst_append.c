/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_append.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:43:25 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/19 19:45:22 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Creates a node and appends it to the end of a linked list.
*/
void	ft_dlst_append(t_dlist **list, void *content)
{
	t_dlist	*new;

	if (list == NULL || *list == NULL)
		return ;
	new = ft_dlstnew_safe(content);
	ft_dlstadd_back(list, new);
}
