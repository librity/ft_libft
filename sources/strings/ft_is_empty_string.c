/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_empty_string.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 18:38:56 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/29 00:15:53 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Returns true if string contains only whitespace.
*/
bool	ft_is_empty_string(char *str)
{
	while (ft_is_whitespace(*str))
		str++;
	if (*str == '\0')
		return (true);
	return (false);
}
