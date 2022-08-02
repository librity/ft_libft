/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_in_strarr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:50:36 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/02 16:47:46 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Returns the string in NULL-terminated haystack that matches needle or NULL.
*/
char	*ft_find_in_strarr(char **haystack, char *needle)
{
	while (*haystack != NULL)
	{
		if (ft_streq(needle, *haystack))
			return (*haystack);
		haystack++;
	}
	return (NULL);
}
