/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/07 18:01:58 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void free_content(void *content)
{
	free(content);
}

void useless(void *delete_me)
{
	if (delete_me == NULL)
		return;
}

void nulls_string(void *delete_me)
{
	ft_bzero(delete_me, 10);
}

void deleted(void *delete_me)
{
	ft_strlcpy(delete_me, "DELETED", 8);
}

void all_as(void *delete_me)
{
	ft_memset(delete_me, 'A', 10);
}

int main(void)
{

	char *string1 = ft_strdup("When I grow up, I wanna be indexed by a linked list!");
	char *string2 = ft_strdup("Don't forget to free up memory dawg.");
	char *string3 = ft_strdup("Leaking all over the place, don't it bother you?.");
	char *string4 = ft_strdup("Last call, hail mary presscott touchdown.");

	t_list *list;
	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *node4;

	node1 = ft_lstnew(string1);
	node2 = ft_lstnew(string2);
	node3 = ft_lstnew(string3);
	node4 = ft_lstnew(string4);

	list = NULL;

	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);
	ft_lstadd_back(&list, node4);

	ft_lstiter(node1, &all_as);
	ft_putendl_fd("--------------", 1);

	while (node1->next != NULL)
	{
		ft_putendl_fd((char *)(node1->content), 1);
		node1 = node1->next;
	}

	ft_putendl_fd("--------------", 1);

	ft_putendl_fd(string1, 1);
	ft_putendl_fd(string2, 1);
	ft_putendl_fd(string3, 1);
	ft_putendl_fd(string4, 1);

	return (0);
}
