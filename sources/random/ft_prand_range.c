/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prand_range.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 00:35:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/25 20:24:54 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Returns a pseudo-random unsigned int within start and end.
*/
unsigned int	ft_prand_range(unsigned int start, unsigned int end)
{
	static unsigned int	rand = 0xACE1U;

	if (start == end)
		return (start);
	rand += 0x3AD;
	rand %= end;
	while (rand < start)
		rand = rand + end - start;
	return (rand);
}
