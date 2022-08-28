/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:59:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/25 16:18:47 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Checks if c is an ASCII letter.
*/

/**
 * @brief Checks if character is an ASCII letter.
 *
 * @param character The char to be checked.
 * @return true Character is an ASCII letter.
 * @return false Character is not an ASCII letter.
 */
bool	ft_isalpha(char character)
{
	return (ft_isupper(character) || ft_islower(character));
}
