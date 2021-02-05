/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 00:34:28 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/03 22:15:39 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int	main(void){
	printf("%d\n", ft_strncmp("ABA", "AB", 3));
	printf("%d\n", strncmp("ABA", "AB", 3));
	printf("--------------\n");
	printf("%d\n", ft_strncmp("ABA", "ABZ", 3));
	printf("%d\n", strncmp("ABA", "ABZ", 3));
	printf("--------------\n");
	printf("%d\n", ft_strncmp("ABA", "ABA", 2));
	printf("%d\n", strncmp("ABA", "ABA", 2));
	printf("--------------\n");

	printf("%d\n", ft_strncmp("ABA", "AB", 3));
	printf("%d\n", strncmp("ABA", "AB", 3));
	printf("--------------\n");
	printf("%d\n", ft_strncmp("ABA", "ABZ", 3));
	printf("%d\n", strncmp("ABA", "ABZ", 3));
	printf("--------------\n");
	printf("%d\n", ft_strncmp("ABA", "ABA", 2));
	printf("%d\n", strncmp("ABA", "ABA", 2));
	printf("--------------\n");
	
	printf("%d\n", ft_strncmp("ABC", "ABC", 3));
	printf("%d\n", strncmp("ABC", "ABC", 3));
	printf("--------------\n");
	printf("%d\n", ft_strncmp("ABC", "ABCD", 3));
	printf("%d\n", strncmp("ABC", "ABCD", 3));
	printf("--------------\n");

	printf("%d\n", ft_strncmp("hello", "helLO WORLD", 3));
	printf("%d\n", strncmp("hello", "helLO WORLD", 3));
	printf("--------------\n");
	printf("%d\n", ft_strncmp("hello", "helLO WORLD", 4));
	printf("%d\n", strncmp("hello", "helLO WORLD", 4));
	printf("--------------\n");

	printf("%d\n", ft_strncmp("ABC", "ABCD", 4));
	printf("%d\n", strncmp("ABC", "ABCD", 4));
	printf("--------------\n");
	printf("%d\n", ft_strncmp("ABc", "ABC", 3));
	printf("%d\n", strncmp("ABc", "ABC", 3));
	printf("--------------\n");
	printf("%d\n", ft_strncmp("abcdef", "ABCDEF", 4));
	printf("%d\n", strncmp("abcdef", "ABCDEF", 4));
	printf("--------------\n");

	printf("%d\n", ft_strncmp("ABCDEF", "abcdef", 4));
	printf("%d\n", strncmp("ABCDEF", "abcdef", 4));
	printf("--------------\n");

	printf("%d\n", ft_strncmp("Aticleworld", "Atic", 3));
	printf("%d\n", strncmp("Aticleworld", "Atic", 3));
	printf("--------------\n");
	printf("%d\n", ft_strncmp("Hello", "Aticleworld", 5));
	printf("%d\n", strncmp("Hello", "Aticleworld", 5));
	printf("--------------\n");

	printf("%d\n", ft_strncmp("Aticleworld", "world", 3));
	printf("%d\n", strncmp("Aticleworld", "world", 3));
	printf("--------------\n");

	printf("%d\n", ft_strncmp("world", "Aticleworld", 3));
	printf("%d\n", strncmp("world", "Aticleworld", 3));
	printf("--------------\n");

	printf("%d\n", ft_strncmp("world", "Aticleworld", 3));
	printf("%d\n", strncmp("world", "Aticleworld", 3));
	printf("--------------\n");

	printf("%d\n", ft_strncmp("ABCDE\0\0\0\0", "ABCDE\0\0\0\0", 7));
	printf("%d\n", strncmp("ABCDE\0\0\0\0", "ABCDE\0\0\0\0", 7));
	printf("--------------\n");

	printf("%d\n", ft_strncmp("ABCDE\0\0\0\0", "ABCDE\0abc", 5));
	printf("%d\n", strncmp("ABCDE\0\0\0\0", "ABCDE\0abc", 5));
	printf("--------------\n");

	printf("%d\n", ft_strncmp("ABCDE\0\0\0\0", "ABCDEFGH", 8));
	printf("%d\n", strncmp("ABCDE\0\0\0\0", "ABCDEFGH", 8));
	printf("--------------\n");

	return (0);
}
