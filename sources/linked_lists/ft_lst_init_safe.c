/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_init_safe.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 21:13:08 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/21 15:47:40 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Initializes a linked list or dies trying.
*/
void	ft_lst_init_safe(t_list **list, void *content)
{
	if (list == NULL)
		ft_die(LIST_INIT_REFERENCE_ERR);
	if (*list != NULL)
		ft_die(LIST_INIT_NONEMPTY_ERR);
	ft_lst_init(list, content);
}
