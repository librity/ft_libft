/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_del.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 01:54:30 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/19 20:08:36 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin_del(char **delete_me, const char *dont_delete_me)
{
	size_t	total_size;
	size_t	delete_me_size;
	char	*new_string;

	delete_me_size = ft_strlen(*delete_me) + 1;
	total_size = delete_me_size + ft_strlen(dont_delete_me);
	new_string = ft_salloc(total_size * sizeof(char));
	ft_strcpy(new_string, *delete_me);
	ft_strlcat(new_string, dont_delete_me, total_size);
	ft_strdel(delete_me);
	return (new_string);
}
