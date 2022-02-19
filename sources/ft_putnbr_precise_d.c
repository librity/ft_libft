/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_precise_d.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 07:42:34 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/18 23:41:41 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Transforms a floating point number n into an allocated string.
*/

static void	cast_parts(double n, unsigned long long *whole, double *decimal)
{
	*whole = (long long)n;
	*decimal = (n - *whole);
	if (*decimal < 0)
		*decimal *= -1;
}

static void	print_whole(double n, unsigned long long whole)
{
	if (n < 0.0)
		ft_putchar('-');
	ft_putnbr_ull(whole);
}

static void	print_decimal(int precision, double decimal)
{
	unsigned long long	shifted;
	char				leading_zeros;

	ft_putchar('.');
	shifted = (decimal * ft_pow(10, precision));
	leading_zeros = precision - ft_count_digits_ull(shifted);
	if (leading_zeros <= 0)
		return (ft_putnbr_ull(shifted));
	while (leading_zeros)
	{
		ft_putchar('0');
		leading_zeros--;
	}
	ft_putnbr_ull(shifted);
}

void	ft_putnbr_precise_d(double n, int precision)
{
	unsigned long long	whole;
	double				decimal;

	if (precision < 0)
		return ;
	cast_parts(n, &whole, &decimal);
	print_whole(n, whole);
	print_decimal(precision, decimal);
}
