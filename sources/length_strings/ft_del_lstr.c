/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_lstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 22:56:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/02 16:14:58 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Frees a length string and sets its pointer to NULL.
*/
void	ft_del_lstr(t_lstr **delete_me)
{
	ft_del((void **)delete_me);
}
