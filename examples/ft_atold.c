/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atold.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:24:12 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/22 11:31:16 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	printf("EXPECTED: %f\n", atof("-123"));
	printf("RESULT:   %Lf\n", ft_atold("-123"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("98993489"));
	printf("RESULT:   %Lf\n", ft_atold("98993489"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("-2147483648"));
	printf("RESULT:   %Lf\n", ft_atold("-2147483648"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("2147483647"));
	printf("RESULT:   %Lf\n", ft_atold("2147483647"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("tutorialspoint.com"));
	printf("RESULT:   %Lf\n", ft_atold("tutorialspoint.com"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("  \t\r--451"));
	printf("RESULT:   %Lf\n", ft_atold("  \t\r--451"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("  ---+--+1234ab567"));
	printf("RESULT:   %Lf\n", ft_atold("  ---+--+1234ab567"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("  ---+--+--+6451-1ab567"));
	printf("RESULT:   %Lf\n", ft_atold("  ---+--+--+6451-1ab567"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("-123.3139"));
	printf("RESULT:   %Lf\n", ft_atold("-123.3139"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("98993489.21410"));
	printf("RESULT:   %Lf\n", ft_atold("98993489.21410"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("-2147483648.950416"));
	printf("RESULT:   %Lf\n", ft_atold("-2147483648.950416"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("2147483647.85349832"));
	printf("RESULT:   %Lf\n", ft_atold("2147483647.85349832"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("tutorialspoint.com"));
	printf("RESULT:   %Lf\n", ft_atold("tutorialspoint.com"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("  \t\r--451.590551"));
	printf("RESULT:   %Lf\n", ft_atold("  \t\r--451.590551"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("  ---+--+1234ab567.48494751"));
	printf("RESULT:   %Lf\n", ft_atold("  ---+--+1234ab567.48494751"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("  ---+--+--+6451-1ab567.947514"));
	printf("RESULT:   %Lf\n", ft_atold("  ---+--+--+6451-1ab567.947514"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("0.0"));
	printf("RESULT:   %Lf\n", ft_atold("0.0"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("+0.0"));
	printf("RESULT:   %Lf\n", ft_atold("+0.0"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-0.0"));
	printf("RESULT:   %Lf\n", ft_atold("-0.0"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("  ---+--+--+0.0"));
	printf("RESULT:   %Lf\n", ft_atold("  ---+--+--+0.0"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("0.00000100"));
	printf("RESULT:   %Lf\n", ft_atold("0.00000100"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("+0.00000100"));
	printf("RESULT:   %Lf\n", ft_atold("+0.00000100"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-0.00000100"));
	printf("RESULT:   %Lf\n", ft_atold("-0.00000100"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("1.0"));
	printf("RESULT:   %Lf\n", ft_atold("1.0"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("+1.0"));
	printf("RESULT:   %Lf\n", ft_atold("+1.0"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-1.0"));
	printf("RESULT:   %Lf\n", ft_atold("-1.0"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("2.0"));
	printf("RESULT:   %Lf\n", ft_atold("2.0"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("+2.0"));
	printf("RESULT:   %Lf\n", ft_atold("+2.0"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-2.0"));
	printf("RESULT:   %Lf\n", ft_atold("-2.0"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("1.13821381"));
	printf("RESULT:   %Lf\n", ft_atold("1.13821381"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("+1.13821381"));
	printf("RESULT:   %Lf\n", ft_atold("+1.13821381"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-1.13821381"));
	printf("RESULT:   %Lf\n", ft_atold("-1.13821381"));
	printf("--------\n");

	printf("EXPECTED: %f\n", atof("0.123"));
	printf("RESULT:   %Lf\n", ft_atold("0.123"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-0.2321"));
	printf("RESULT:   %Lf\n", ft_atold("-0.2321"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-0.3842"));
	printf("RESULT:   %Lf\n", ft_atold("-0.3842"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-0.391"));
	printf("RESULT:   %Lf\n", ft_atold("-0.391"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-0.4"));
	printf("RESULT:   %Lf\n", ft_atold("-0.4"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-0.587"));
	printf("RESULT:   %Lf\n", ft_atold("-0.587"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-0.70176"));
	printf("RESULT:   %Lf\n", ft_atold("-0.70176"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-0.7269"));
	printf("RESULT:   %Lf\n", ft_atold("-0.7269"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-0.75"));
	printf("RESULT:   %Lf\n", ft_atold("-0.75"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-0.8"));
	printf("RESULT:   %Lf\n", ft_atold("-0.8"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-0.835"));
	printf("RESULT:   %Lf\n", ft_atold("-0.835"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-1.0"));
	printf("RESULT:   %Lf\n", ft_atold("-1.0"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("-2.0"));
	printf("RESULT:   %Lf\n", ft_atold("-2.0"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("0.0"));
	printf("RESULT:   %Lf\n", ft_atold("0.0"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("0.01"));
	printf("RESULT:   %Lf\n", ft_atold("0.01"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("0.1428"));
	printf("RESULT:   %Lf\n", ft_atold("0.1428"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("0.156"));
	printf("RESULT:   %Lf\n", ft_atold("0.156"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("0.1889"));
	printf("RESULT:   %Lf\n", ft_atold("0.1889"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("0.285"));
	printf("RESULT:   %Lf\n", ft_atold("0.285"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("0.3"));
	printf("RESULT:   %Lf\n", ft_atold("0.3"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("0.4"));
	printf("RESULT:   %Lf\n", ft_atold("0.4"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("0.45"));
	printf("RESULT:   %Lf\n", ft_atold("0.45"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("0.6"));
	printf("RESULT:   %Lf\n", ft_atold("0.6"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("0.745"));
	printf("RESULT:   %Lf\n", ft_atold("0.745"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("1.0"));
	printf("RESULT:   %Lf\n", ft_atold("1.0"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("2.0"));
	printf("RESULT:   %Lf\n", ft_atold("2.0"));
	printf("--------\n");
	printf("EXPECTED: %f\n", atof("3.0"));
	printf("RESULT:   %Lf\n", ft_atold("3.0"));
	printf("--------\n");

	return (0);
}
