/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:18:05 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/27 21:03:25 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Traverses format string
 * while calling the appropiate conversion handlers.
 *
 * @param print_control The main control struct.
 */
void	pf_vprintf(t_printf *print_control)
{
	while (*(print_control->format) != '\0')
	{
		if (pf_handled_no_conversion(print_control))
			continue ;
		find_current_conversion_position(print_control);
		if (pf_handled_percent(print_control))
			continue ;
		if (pf_handled_c(print_control))
			continue ;
		if (pf_handled_s(print_control))
			continue ;
		if (pf_handled_int(print_control))
			continue ;
		if (pf_handled_u(print_control))
			continue ;
		if (pf_handled_p(print_control))
			continue ;
		if (pf_handled_hex(print_control))
			continue ;
		if (pf_handled_lf(print_control))
			continue ;
		if (pf_handled_f(print_control))
			continue ;
	}
}
