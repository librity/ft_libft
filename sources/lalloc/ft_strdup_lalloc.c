/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_lalloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:59:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/30 14:44:52 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Creates an allocated string with the same chars of s
** and adds it to the lalloc.
*/
char	*ft_strdup_lalloc(t_list **lalloc, const char *s)
{
	char	*new_string;

	new_string = ft_strdup(s);
	ft_add_lalloc(lalloc, new_string);
	return (new_string);
}
