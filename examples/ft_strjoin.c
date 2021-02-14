/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 22:16:37 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/06 18:16:51 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	printf("%s\n", ft_strjoin("I like", " turtles!DSA@"));
	printf("----------\n");

	printf("%s\n", ft_strjoin("sda d e", " ds!da@ ds"));
	printf("----------\n");

	printf("%s\n", ft_strjoin("d2", " turtles!1s|sda|@"));
	printf("----------\n");

	printf("%s\n", ft_strjoin("If money can't buy happiness", " then why is it so fabulous?"));
	printf("----------\n");

	printf("%s\n", ft_strjoin("I like", " turtles\0!DSA@"));
	printf("----------\n");

	printf("%s\n", ft_strjoin("I like", ""));
	printf("----------\n");

	printf("%s\n", ft_strjoin("", " turtles\0!DSA@"));
	printf("----------\n");

	printf("%s\n", ft_strjoin("", ""));
	printf("----------\n");

	return (0);
}
