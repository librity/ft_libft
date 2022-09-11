/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_cutn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:15:15 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/09/11 19:53:50 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Cuts n pointers of a NULL-terminated C-string array.
 *
 * @param cut_me The pointer to be cut.
 * @param cut_me The number of pointers to cut.
 */
void	ft_strarr_cutn(char **cut_me, int n)
{
	if (n <= 0)
		return ;
	if ((size_t)n > ft_strarr_size(cut_me))
		return ;
	while (cut_me != NULL && *cut_me != NULL)
	{
		*cut_me = *(cut_me + n);
		cut_me++;
	}
}
