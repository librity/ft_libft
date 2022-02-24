/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 07:38:23 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/19 22:16:52 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Prints an unsigned int in lowercase hexadecimal.
*/
void	ft_puthex_lowercase(unsigned int number)
{
	ft_putnbr_base_ui(number, LOWERCASE_HEX_BASE);
}
