/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:50:09 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/21 13:28:05 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Trasverses every node of a doubly linked list and runs f on each content.
*/
void	ft_dlstiter(t_dlist *list, void (*f)(void *))
{
	if (list == NULL)
		return ;
	f(list->content);
	if (list->next == NULL)
		return ;
	ft_dlstiter(list->next, f);
}
