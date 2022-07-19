/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_create_prepend.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 21:13:08 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/19 19:45:20 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** If not initialized, creates list with allocates pointer.
** If initialized, prepends allocated pointer to list.
*/
void	ft_dlst_create_prepend(t_dlist **list, void *pointer)
{
	if (*list == NULL)
	{
		*list = ft_dlstnew_safe(pointer);
		return ;
	}
	ft_dlst_prepend(list, pointer);
}
