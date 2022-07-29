/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:15:15 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/29 19:45:30 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Counts how many pointers a NULL-terminated string array has excluding NULL.
*/
size_t	ft_strarr_len(char **strings)
{
	return (ft_arr_len((void **)strings));
}
