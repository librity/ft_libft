/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:24:12 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/04 23:32:07 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_my_struct
{
	char	*name;
	char	*code;
	int		number;
	void	*danger;
}			t_my_struct;

typedef struct s_my_struct2
{
	char	name[50];
	char	code[50];
	int		number;
	void	*danger;
}			t_my_struct2;

int	main(void)
{
	t_my_struct example = (t_my_struct){
		.name = "NAME",
		.code = "304",
		.number = 42,
		.danger = NULL};
	ft_hexdump("This is my struct", &example, sizeof(t_my_struct));

	t_my_struct2 example2 = (t_my_struct2){
		.number = 42,
		.danger = NULL};
	ft_memcpy(example2.name, "THIS IS MY NAME", ft_strsize("THIS IS MY NAME"));
	ft_memcpy(example2.code, "SAY MY NAME", ft_strsize("SAY MY NAME"));
	ft_hexdump("This is my other struct", &example2, sizeof(t_my_struct2));

	return (0);
}
