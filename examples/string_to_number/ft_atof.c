/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:24:12 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/19 23:42:59 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	printf("EXPECTED: %f\n", atof("-123"));
	printf("RESULT:   %f\n", ft_atof("-123"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("98993489"));
	printf("RESULT:   %f\n", ft_atof("98993489"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("-2147483648"));
	printf("RESULT:   %f\n", ft_atof("-2147483648"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("2147483647"));
	printf("RESULT:   %f\n", ft_atof("2147483647"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("tutorialspoint.com"));
	printf("RESULT:   %f\n", ft_atof("tutorialspoint.com"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("  \t\r--451"));
	printf("RESULT:   %f\n", ft_atof("  \t\r--451"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("  ---+--+1234ab567"));
	printf("RESULT:   %f\n", ft_atof("  ---+--+1234ab567"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("  ---+--+--+6451-1ab567"));
	printf("RESULT:   %f\n", ft_atof("  ---+--+--+6451-1ab567"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("-123.3139"));
	printf("RESULT:   %f\n", ft_atof("-123.3139"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("98993489.21410"));
	printf("RESULT:   %f\n", ft_atof("98993489.21410"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("-2147483648.95041"));
	printf("RESULT:   %f\n", ft_atof("-2147483648.95041"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("2147483647.85349"));
	printf("RESULT:   %f\n", ft_atof("2147483647.85349"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("tutorialspoint.com"));
	printf("RESULT:   %f\n", ft_atof("tutorialspoint.com"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("  \t\r--451.590551"));
	printf("RESULT:   %f\n", ft_atof("  \t\r--451.590551"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("  ---+--+1234ab567.48494751"));
	printf("RESULT:   %f\n", ft_atof("  ---+--+1234ab567.48494751"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("  ---+--+--+6451-1ab567.947514"));
	printf("RESULT:   %f\n", ft_atof("  ---+--+--+6451-1ab567.947514"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("0.0"));
	printf("RESULT:   %f\n", ft_atof("0.0"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("+0.0"));
	printf("RESULT:   %f\n", ft_atof("+0.0"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-0.0"));
	printf("RESULT:   %f\n", ft_atof("-0.0"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("  ---+--+--+0.0"));
	printf("RESULT:   %f\n", ft_atof("  ---+--+--+0.0"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("0.00000100"));
	printf("RESULT:   %f\n", ft_atof("0.00000100"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("+0.00000100"));
	printf("RESULT:   %f\n", ft_atof("+0.00000100"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-0.00000100"));
	printf("RESULT:   %f\n", ft_atof("-0.00000100"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("1.0"));
	printf("RESULT:   %f\n", ft_atof("1.0"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("+1.0"));
	printf("RESULT:   %f\n", ft_atof("+1.0"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-1.0"));
	printf("RESULT:   %f\n", ft_atof("-1.0"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("2.0"));
	printf("RESULT:   %f\n", ft_atof("2.0"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("+2.0"));
	printf("RESULT:   %f\n", ft_atof("+2.0"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-2.0"));
	printf("RESULT:   %f\n", ft_atof("-2.0"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("1.13821381"));
	printf("RESULT:   %f\n", ft_atof("1.13821381"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("+1.13821381"));
	printf("RESULT:   %f\n", ft_atof("+1.13821381"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-1.13821381"));
	printf("RESULT:   %f\n", ft_atof("-1.13821381"));
	printf("--------\n");

	return (0);
}
