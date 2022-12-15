/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dump_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:36:08 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/12/15 18:32:07 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Read from a file descriptor until GNL_FOUND_EOF or GNL_ERROR.
 *
 * @param fd The file descriptor to be read.
 */
void	ft_dump_fd(int fd)
{
	int		status;
	char	*line;

	while (true)
	{
		status = ft_get_next_line(fd, &line);
		if (status == FT_GNL_ERROR)
			break ;
		ft_putendl(line);
		free(line);
		if (status == FT_GNL_FOUND_EOF)
			break ;
	}
}
