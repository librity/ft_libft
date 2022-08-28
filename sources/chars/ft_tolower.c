/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:59:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/25 16:26:53 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Lowers character case if it is an uppercase ASCII letter.
*/

/**
 * @brief Lowers character case if it is an uppercase ASCII letter.
 *
 * @param character The character to be lowered.
 * @return char The lowercase character.
 */
char	ft_tolower(char character)
{
	if (ft_isupper(character))
		return (character + 32);
	return (character);
}
