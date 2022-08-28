/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_whitespace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:59:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/25 12:41:31 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Checks if character is an ASCII whitespace character.
*/

/**
 * @brief Checks if character is an ASCII whitespace character.
 *
 * @param character The char to be checked.
 * @return true Character is ASCII plus or minus.
 * @return false Character is not ASCII plus or minus.
 */
bool	ft_is_whitespace(char character)
{
	return (character == '\n'
		|| character == '\t'
		|| character == '\v'
		|| character == '\r'
		|| character == '\f'
		|| character == ' '
	);
}
