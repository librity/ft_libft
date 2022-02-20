/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atold.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:59:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/20 00:58:08 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Takes in a string and parses its chars into a long double.
*/
long double	ft_atold(const char *str)
{
	long double	number;
	long long	whole;
	long long	decimal;
	int			decimal_length;
	bool		is_negative;

	is_negative = false;
	whole = ft_atoll(str);
	if (whole < 0)
	{
		is_negative = true;
		whole *= -1;
	}
	str = ft_skip_whitespace((char *)str);
	str = ft_skip_plus_or_minus((char *)str);
	str = ft_skip_digits((char *)str);
	if (*str != '.')
		return (whole);
	str++;
	decimal = ft_atoll(str);
	if (decimal < 0)
		decimal *= -1;
	decimal_length = ft_count_digits_ull(decimal);
	number = whole;
	number += decimal / ft_pow_ll(10, decimal_length);
	if (is_negative)
		return (number * -1);
	return (number);
}
