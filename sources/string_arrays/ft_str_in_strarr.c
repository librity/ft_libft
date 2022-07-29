/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_in_strarr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:50:36 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/29 18:54:37 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Returns true if needle is in NULL-terminated haystack.
*/
bool	ft_str_in_strarr(char **haystack, char *needle)
{
	while (*haystack != NULL)
	{
		if (ft_streq(needle, *haystack))
			return (true);
		haystack++;
	}
	return (false);
}
