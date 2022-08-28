/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:59:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/25 16:22:38 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Checks if character is an ASCII character.
*/

/**
 * @brief Checks if character is an ASCII character.
 *
 * @param character The char to be checked.
 * @return true Character is an ASCII character.
 * @return false Character is not an ASCII character.
 */
bool	ft_isascii(char character)
{
	return (character >= 0 && character <= 127);
}
