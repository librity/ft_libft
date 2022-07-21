/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 18:02:11 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/21 13:31:32 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	*return_unchanged(void *content)
{
	return (content);
}

/*
** Creates a copy of the doubly linked list.
** If it fails in creating any node it clears the list with del.
*/
t_dlist	*ft_dlstdup(t_dlist *list, void (*del)(void *))
{
	return (ft_dlstmap(list, return_unchanged, del));
}