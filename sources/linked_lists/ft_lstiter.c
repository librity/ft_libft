/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:50:09 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/19 19:39:09 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Trasverses every node of a linked list while running f on every content.
*/
void	ft_lstiter(t_list *list, void (*f)(void *))
{
	if (list == NULL)
		return ;
	f(list->content);
	if (list->next == NULL)
		return ;
	ft_lstiter(list->next, f);
}
