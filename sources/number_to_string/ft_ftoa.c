/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:59:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/26 00:25:13 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
**
*/

/**
 * @brief Parses a float n into an allocated string
 * with a default precision of 6.
 *
 * @param n The float to be parsed.
 * @return char* Its string representation.
 */
char	*ft_ftoa(float n)
{
	return (ft_precise_ftoa(n, DEFAULT_PRINT_FLOAT_PRECISION));
}
