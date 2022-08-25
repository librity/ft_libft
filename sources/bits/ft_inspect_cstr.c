/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inspect_cstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:29:07 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/23 14:31:48 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	_print_bits_uc(unsigned char c)
{
	int	i;

	ft_putchar('|');
	i = (sizeof(char) * 8) - 1;
	while (i >= 0)
	{
		if (c & (1u << i))
			ft_putchar('1');
		else
			ft_putchar('0');
		i--;
	}
}

void	ft_inspect_cstr(char *str)
{
	while (*str != '\0')
		_print_bits_uc(*str++);
	_print_bits_uc(*str);
	ft_putchar('|');
	ft_putchar('\n');
}
