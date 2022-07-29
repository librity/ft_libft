/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_die.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:42:15 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/29 01:10:02 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Prints error message to STDERR_FILENO and exits with status 1.
*/
void	ft_die(void *error_message)
{
	ft_putstr_fd(ERROR_PREFIX, STDERR_FILENO);
	ft_putstr_fd(error_message, STDERR_FILENO);
	exit(EXIT_FAILURE);
}
