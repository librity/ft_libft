/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:30:55 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/19 22:48:35 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Swaps the values of two int pointers.
*/
void	ft_swap_i(int *a, int *b)
{
	int	auxiliary;

	auxiliary = *a;
	*a = *b;
	*b = auxiliary;
}
