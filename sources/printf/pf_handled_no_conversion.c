/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_handled_no_conversion.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:18:48 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/03/21 16:51:35 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/*
** Handles printf's empty conversion.
*/
bool	pf_handled_no_conversion(t_printf *print_control)
{
	if (*(print_control->format) == '%')
		return (false);
	ft_putchar(*(print_control->format));
	(print_control->format)++;
	(print_control->chars_printed)++;
	return (true);
}
