/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_create_prepend.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 21:13:08 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/03/14 22:12:35 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** If not initialized, creates list with allocates pointer.
** If initialized, prepends allocated pointer to list.
*/
void	ft_lst_create_prepend(t_list **list, void *pointer)
{
	if (*list == NULL)
	{
		*list = ft_lstnew_safe(pointer);
		return ;
	}
	ft_lst_prepend(list, pointer);
}
