/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 00:22:45 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/20 18:56:37 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Writes char c to file descriptor fd.
*/
void	ft_putchar_fd(char c, int fd)
{
	ssize_t	write_return;

	write_return = write(fd, &c, 1);
	if (write_return < 0)
	{
		ft_putstr_fd(WRITE_ERROR_MESSAGE, 2);
		exit(EXIT_FAILURE);
	}
}
