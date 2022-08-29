/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uc_to_buffer_base.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:59:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/28 23:52:29 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	write_digits(char *buffer,
							unsigned int number,
							char *base,
							unsigned int base_length)
{
	unsigned int	i;

	i = CHAR_PRINT_DIGITS;
	while (i--)
	{
		buffer[i] = base[number % base_length];
		number /= base_length;
	}
}

/**
 * @brief Parses an unsigned char
 * and writes it to a previously-allocated buffer.
 *
 * @param number The unsigned char to be parsed.
 * @param base A string with the characters that represent a number
 * in a counting system.
 * @param buffer The buffer's address.
 * @return unsigned int The number of characters written.
 */
unsigned int	ft_uc_to_buffer_base(unsigned char number, char *base,
						char *buffer)
{
	unsigned int	base_length;

	base_length = ft_strlen(base);
	if (!ft_is_valid_base(base, base_length))
		ft_die(BASE_ERR);
	write_digits(buffer, number, base, base_length);
	return (CHAR_PRINT_DIGITS);
}
