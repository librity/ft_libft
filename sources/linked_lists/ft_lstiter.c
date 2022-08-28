/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:50:09 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/27 21:03:25 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Trasverses every node of a linked list and runs f on each content.
 *
 * @param list The linked list.
 * @param f The callback that runs on each node of the list.
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
