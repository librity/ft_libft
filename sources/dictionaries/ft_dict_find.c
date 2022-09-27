/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dump_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:36:08 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/09/27 14:09:11 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Find the value of a key in a dictionary.
 *
 * @param dictionary The NULL-terminated dictionary array to be searched.
 * @param key The key to search for.
 * @return void* The value or NULL.
 */
void	*ft_dict_find(const t_dict **dictionary, char *key)
{
	t_dict	**node;

	node = (t_dict **)dictionary;
	while (*node != NULL)
	{
		if (ft_streq(key, (*node)->key))
			return ((*node)->value);
		node++;
	}
	return (NULL);
}
