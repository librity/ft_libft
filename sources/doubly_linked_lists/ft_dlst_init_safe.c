/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_init_safe.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 21:13:08 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/21 15:45:13 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Initializes a doubly linked list or dies trying.
*/
void	ft_dlst_init_safe(t_dlist **list, void *content)
{
	if (list == NULL)
		ft_die(DLIST_INIT_REFERENCE_ERR);
	if (*list != NULL)
		ft_die(DLIST_INIT_NONEMPTY_ERR);
	ft_dlst_init(list, content);
}
