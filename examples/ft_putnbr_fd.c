/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/07 00:48:29 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	ft_putnbr_fd(1234, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-1234, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(131234, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-1234, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(99999, 1);
	ft_putchar_fd('\n', 1);

	return (0);
}
