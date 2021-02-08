/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:59:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/07 22:27:21 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes in a string and parses its digits characters into an integer.
*/

static int	is_whitespace(char character)
{
	return (character == '\n' || character == '\t' ||
					character == '\v' || character == '\r' ||
					character == '\f' || character == ' ');
}

static int	is_plus_or_minus(char character)
{
	return (character == '+' || character == '-');
}

int			ft_atoi(const char *nptr)
{
	int number;
	int sign;
	int previous_number;

	number = 0;
	sign = -1;
	previous_number = 0;
	while (is_whitespace(*nptr))
		nptr++;
	if (is_plus_or_minus(*nptr))
		if (*nptr++ == '-')
			sign = 1;
	while (ft_isdigit(*nptr))
	{
		number *= 10;
		number -= (*nptr++ - '0');
		if (previous_number < number)
		{
			if (sign < 0)
				return (-1);
			return (0);
		}
		previous_number = number;
	}
	return (number * sign);
}
