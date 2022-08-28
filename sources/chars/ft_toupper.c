/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:59:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/25 16:28:10 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Raises char case if lowercase ASCII letter.
*/

/**
 * @brief Raises character case if it is an lowercase ASCII letter.
 *
 * @param character The character to be raised.
 * @return char The uppercase character.
 */
char	ft_toupper(char character)
{
	if (ft_islower(character))
		return (character - 32);
	return (character);
}
