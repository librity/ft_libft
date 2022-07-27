/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_index_out_of_bounds.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:03:09 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/26 21:06:47 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

bool	ft_dlst_index_out_of_bounds(t_dlist **list, int index)
{
	if (list == NULL)
		return (true);
	if (index < 0)
		return (true);
	if (index > ft_dlst_max_index(*list))
		return (true);
	return (false);
}
