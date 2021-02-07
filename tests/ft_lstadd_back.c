/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/07 16:37:46 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	char string1[80] = "When I grow up, I wanna be indexed by a linked list!";
	char string2[80] = "Don't forget to free up memory dawg.";
	char string3[80] = "Leaking all over the place, don't it bother you?.";
	char string4[80] = "Last call, hail mary presscott touchdown.";

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

	printf("%p\n", node1->next);
	printf("%p\n", node2->next);
	printf("%p\n", node3->next);
	printf("%p\n", node4->next);

	while (node1->next != NULL)
	{
		ft_putendl_fd((char *)(node1->content), 1);
		node1 = node1->next;
	}

	ft_putendl_fd("--------------", 1);

	return (0);
}
