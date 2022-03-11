/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_lalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 21:13:08 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/03/11 19:54:24 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Appends an allocated pointer to a linked list.
*/
void	ft_add_lalloc(t_list **lalloc, void *pointer)
{
	if (*lalloc == NULL)
	{
		*lalloc = ft_lstnew_safe(pointer);
		return ;
	}
	ft_lst_append(lalloc, pointer);
}
