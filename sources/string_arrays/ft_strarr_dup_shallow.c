/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_dup_shallow.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:15:15 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/09/11 12:26:34 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Clones a NULL-terminated C-string array.
 *
 * @param clone_me The string array to be cloned.
 * @return char** The cloned array or NULL.
 */
char	**ft_strarr_dup_shallow(char **clone_me)
{
	char	**clone;
	char	**copier;

	if (clone_me == NULL)
		return (NULL);
	clone = ft_strarr_new(ft_strarr_len(clone_me));
	copier = clone;
	while (*clone_me != NULL)
	{
		*copier = *clone_me;
		copier++;
		clone_me++;
	}
	*copier = NULL;
	return (clone);
}
