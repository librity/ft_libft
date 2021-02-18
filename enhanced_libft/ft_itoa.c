/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:59:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/07 22:44:04 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Transforms a number n into an allocated string.
*/

static size_t	count_digits(int n)
{
	size_t digit_count;

	digit_count = 1;
	while (n /= 10)
		digit_count++;
	return (digit_count);
}

static void		write_digits(
	char *string, size_t digit_count, unsigned int number, int is_negative)
{
	string[digit_count] = '\0';
	while (digit_count--)
	{
		string[digit_count] = '0' + (number % 10);
		number /= 10;
	}
	if (is_negative)
		string[0] = '-';
}

char			*ft_itoa(int n)
{
	size_t			digit_count;
	unsigned int	number;
	unsigned int	is_negative;
	char			*string;

	digit_count = count_digits(n);
	number = (unsigned int)n;
	is_negative = 0;
	if (n < 0)
	{
		number *= -1;
		is_negative = 1;
		digit_count++;
	}
	string = malloc(sizeof(char) * (digit_count + 1));
	if (string == NULL)
		return (NULL);
	write_digits(string, digit_count, number, is_negative);
	return (string);
}
