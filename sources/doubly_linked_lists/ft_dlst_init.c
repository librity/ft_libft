/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 21:13:08 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/21 14:41:52 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Initializes a doubly linked list or dies trying.
*/
void	ft_dlst_init(t_dlist **list, void *content)
{
	if (*list != NULL)
	{
		ft_putstr_fd(DLIST_INIT_ERROR_MESSAGE, 2);
		exit(EXIT_FAILURE);
	}
	*list = ft_dlstnew_safe(content);
}
