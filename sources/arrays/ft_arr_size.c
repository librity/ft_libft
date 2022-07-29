/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:15:15 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/29 19:45:54 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Counts how many pointers a NULL-terminated array has including NULL.
*/
size_t	ft_arr_size(void **array)
{
	return (ft_arr_len(array) + 1);
}
