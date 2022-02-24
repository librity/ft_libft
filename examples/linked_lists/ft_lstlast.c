/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/07 15:56:24 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	t_list **list;

	char string1[80] = "When I grow up, I wanna be indexed by a linked list!";
	char string2[80] = "Don't forget to free up memory dawg.";
	char string3[80] = "Leaking all over the place, don't it bother you?.";
	char string4[80] = "Last call, hail mary presscott touchdown.";

	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *node4;

	list = malloc(sizeof(t_list *) * 5);
	list[4] = NULL;

	node1 = ft_lstnew(string1);
	node2 = ft_lstnew(string2);
	node3 = ft_lstnew(string3);
	node4 = ft_lstnew(string4);

	ft_lstadd_front(list, node1);
	ft_lstadd_front(list, node2);
	ft_lstadd_front(list, node3);
	ft_lstadd_front(list, node4);
	node1->next = NULL;

	ft_putendl_fd(ft_lstlast(node4)->content, 1);
	ft_putendl_fd("--------------", 1);

	ft_putendl_fd(ft_lstlast(node3)->content, 1);
	ft_putendl_fd("--------------", 1);

	ft_putendl_fd(ft_lstlast(node2)->content, 1);
	ft_putendl_fd("--------------", 1);

	ft_putendl_fd(ft_lstlast(node1)->content, 1);
	ft_putendl_fd("--------------", 1);

	// Should error out.
	// ft_putendl_fd(ft_lstlast(NULL)->content, 1);
	// ft_putendl_fd("--------------", 1);

	return (0);
}
