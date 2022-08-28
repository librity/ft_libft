/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 22:56:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/27 20:45:13 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
**
*/

/**
 * @brief Frees a string and sets its pointer to NULL.
 *
 * @param delete_me The C-string to be deleted.
 */
void	ft_strdel(char **delete_me)
{
	ft_del((void **)delete_me);
}
