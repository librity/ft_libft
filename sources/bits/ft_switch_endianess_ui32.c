/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch_endianess_ui32.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 02:04:03 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/28 01:27:12 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Switches the endianess of an unsigned 32-bit word.
 *
 * @param old The word to be switched.
 * @return uint32_t The word with switched endianess.
 */
uint32_t	ft_switch_endianess_ui32(uint32_t old)
{
	uint32_t	new;
	uint32_t	temp;
	int			i;

	new = 0;
	i = 0;
	while (i < 32)
	{
		temp = (old >> i) & 1;
		temp = temp << (32 - i - 1);
		new = new | temp;
		i++;
	}
	return (new);
}
