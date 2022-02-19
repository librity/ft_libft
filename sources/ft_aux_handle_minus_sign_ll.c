/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_handle_minus_sign_ll.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 02:31:03 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/18 23:38:20 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_aux_handle_minus_sign_ll(long long *number_pointer)
{
	if (*number_pointer < 0)
	{
		ft_putchar('-');
		*number_pointer *= -1;
	}
}
