/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ull.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:17:29 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/18 23:19:16 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Writes ascii representation of number to file descriptor fd.
*/

void	ft_putnbr_ull(unsigned long long number)
{
	ft_putnbr_base_ull(number, DECIMAL_BASE);
}
