/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 00:35:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/19 22:10:18 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Writes string s to standard out followed by an endline.
*/
void	ft_putendl(char *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
