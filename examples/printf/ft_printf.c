/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:16:11 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/19 00:28:46 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int main(void)
{
	int printf_return;

	printf_return = printf("TESTING 123\n");
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("TESTING 123\n");
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");

	printf_return = printf("%s\n", "This is a string");
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%s\n", "This is a string");
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");

	// printf_return = printf("%s\n", NULL);
	// printf("printf_return: %d\n", printf_return);
	// printf_return = ft_printf("%s\n", NULL);
	// printf("printf_return: %d\n", printf_return);
	// printf("-----------------------\n");

	printf_return = printf("%s %%\n", "I like turtles");
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%s %%\n", "I like turtles");
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");

	printf_return = printf("%d\n", 42);
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%d\n", 42);
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");

	printf_return = printf("%i\n", 42);
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%i\n", 42);
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");

	printf_return = printf("%c\n", 'L');
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%c\n", 'L');
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");

	printf_return = printf("%u\n", 424242);
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%u\n", 424242);
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");

	printf_return = printf("%p\n", NULL);
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%p\n", NULL);
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");

	printf_return = printf("%p\n", &printf_return);
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%p\n", &printf_return);
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");

	printf_return = printf("%x\n", 424242424);
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%x\n", 424242424);
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");

	printf_return = printf("%f\n", 42.4242);
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%f\n", 42.4242);
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");

	printf_return = printf("%f\n", -42.4242);
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%f\n", -42.4242);
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");

	printf_return = printf("%X\n", 424242424);
	printf("printf_return: %d\n", printf_return);
	printf_return = ft_printf("%X\n", 424242424);
	printf("printf_return: %d\n", printf_return);
	printf("-----------------------\n");


	return (0);
}
