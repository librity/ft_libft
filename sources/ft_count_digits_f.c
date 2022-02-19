/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits_f.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:16:22 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/19 19:42:02 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Transforms a floating point number n into an allocated string.
*/

static void	cast_parts(float number, unsigned long long *whole, float *decimal)
{
	*whole = (long long)number;
	*decimal = (number - *whole);
	if (*decimal < 0)
		*decimal *= -1;
}

unsigned int	ft_count_digits_f(float number, int precision)
{
	unsigned long long	whole;
	float				decimal;
	unsigned int		digits;

	if (precision < 0.0)
		return (0);
	if (number < 0.0)
		number *= -1;
	digits = 0;
	cast_parts(number, &whole, &decimal);
	digits += ft_count_digits_ull(whole);
	digits += precision + 1;
	return (digits);
}
