/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:50:09 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/26 15:03:15 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Trasverses every node of a doubly linked list and runs f on each content.
*/
void	ft_dlstiter(t_dlist *node, void (*f)(void *))
{
	if (node == NULL)
		return ;
	f(node->content);
	if (node->next == NULL)
		return ;
	ft_dlstiter(node->next, f);
}
