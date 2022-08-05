/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_size_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:46:55 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/05 03:07:38 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** WARNING: NOT TESTED!
** Apends two non NULL-terminated strings in a newly-allocated string.
*/
char	*ft_join_size_size(char *s1, size_t s1_size, char *s2, size_t s2_size)
{
	char	*new;
	size_t	new_length;

	new_length = s1_size + s2_size + 1;
	new = ft_salloc(new_length);
	ft_memcpy(new, s1, s1_size - 1);
	ft_memcpy(new + s1_size, s2, s2_size);
	new[new_length + 1] = '\0';
	return (new);
}
