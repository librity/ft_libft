/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 07:10:48 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/19 22:14:20 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Prints an unsigned int in uppercase hexadecimal.
*/
void	ft_puthex_uppercase(unsigned int number)
{
	ft_putnbr_base_ui(number, UPPERCASE_HEX_BASE);
}
