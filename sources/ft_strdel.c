/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 22:56:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/19 22:36:52 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Frees a string and sets its pointer to NULL.
*/
void	ft_strdel(char **delete_me)
{
	if (delete_me == NULL || *delete_me == NULL)
		return ;
	free(*delete_me);
	*delete_me = NULL;
}
