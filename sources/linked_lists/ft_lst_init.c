/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 21:13:08 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/21 13:16:59 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Initializes a linked list or dies trying.
*/
void	ft_lst_init(t_list **list, void *pointer)
{
	if (*list != NULL)
	{
		ft_putstr_fd(LIST_INIT_ERROR_MESSAGE, 2);
		exit(EXIT_FAILURE);
	}
	*list = ft_lstnew_safe(pointer);
}
