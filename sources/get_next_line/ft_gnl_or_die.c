/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl_or_die.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:36:08 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/30 18:20:38 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Reads an entire line from a file indexed by a file descriptor fd,
** then alocates a string with the contents of that line
** without the linebreak '\n' and points *line to it.
**
** Returns 1 if successfull and 0 if it reached the end of the file;
*/
int	ft_gnl_or_die(int fd, char **line)
{
	int	status;

	status = ft_get_next_line(fd, line);
	if (status == GNL_ERROR)
		ft_die(GNL_ERROR_MESSAGE);
	return (status);
}