/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_streq.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 22:56:51 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/27 21:03:25 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief If s1 and s2 are equal returns true; else returns false.
 *
 * @param s1 The first C-string.
 * @param s2 The second C-string.
 * @return true If s1 contains the same characters as s2.
 * @return false If s1 does not contain the same characters as s2.
 */
bool	ft_streq(char *s1, char *s2)
{
	while (*s1 || *s2)
		if (*s1++ != *s2++)
			return (false);
	return (true);
}
