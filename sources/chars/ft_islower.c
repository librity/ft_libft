/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:59:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/25 16:24:21 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Checks if c is a lowercase ASCII letter.
*/

/**
 * @brief Checks if character is a lowercase ASCII letter.
 *
 * @param character The char to be checked.
 * @return true Character is a lowercase ASCII letter.
 * @return false Character is not a lowercase ASCII letter.
 */
bool	ft_islower(char character)
{
	return (character >= 'a' && character <= 'z');
}
