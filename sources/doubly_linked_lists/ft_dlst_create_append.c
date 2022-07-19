/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_create_append.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:43:25 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/19 19:45:21 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** If not initialized, creates list with allocates pointer.
** If initialized, appends allocated pointer to list.
*/
void	ft_dlst_create_append(t_dlist **list, void *pointer)
{
	if (*list == NULL)
	{
		*list = ft_dlstnew_safe(pointer);
		return ;
	}
	ft_dlst_append(list, pointer);
}
