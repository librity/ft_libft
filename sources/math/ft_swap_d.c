/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:30:55 by lpaulo-m          #+#    #+#             */
/*   Updated: 2023/01/30 19:48:10 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Swaps the values of two double pointers.
 *
 * @param a First double pointer.
 * @param b Second double pointer.
 */
void	ft_swap_d(double *a, double *b)
{
	double	auxiliary;

	auxiliary = *a;
	*a = *b;
	*b = auxiliary;
}
