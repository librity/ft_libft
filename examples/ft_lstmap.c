/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/07 19:14:23 by lpaulo-m         ###   ########.fr       */
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

void useless(void *content)
{
	(void)content;
}

void nulls_string(void *content)
{
	ft_bzero(content, 10);
}

void deleted(void *content)
{
	ft_strlcpy(content, "DELETED", 8);
}

void all_as(void *content)
{
	ft_memset(content, 'A', 10);
}

void *plus_one(void *content)
{
	return (content + 1);
}

void *pointer_useless(void *content)
{
	return (content);
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
	t_list *list_copy;

	node1 = ft_lstnew(string1);
	node2 = ft_lstnew(string2);
	node3 = ft_lstnew(string3);
	node4 = ft_lstnew(string4);

	list = NULL;

	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);
	ft_lstadd_back(&list, node4);

	list_copy = ft_lstmap(node1, &pointer_useless, &useless);
	ft_putendl_fd("--------------", 1);

	while (list_copy->next != NULL)
	{
		ft_putendl_fd((char *)(list_copy->content), 1);
		list_copy = list_copy->next;
	}
	ft_putendl_fd((char *)(list_copy->content), 1);
	ft_putendl_fd("--------------", 1);

	return (0);
}
