/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:16:34 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/09/06 15:10:37 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
==569067== Invalid write of size 8
==569067==    at 0x4067C4: pf_handled_s (pf_handled_s.c:54)
==569067==    by 0x404F01: pf_vprintf (pf_vprintf.c:70)
==569067==    by 0x404D3A: ft_printf (ft_printf.c:29)
==569067==    by 0x403DA0: print_warning (print.c:22)
==569067==    by 0x403246: initilize_envht (envht.c:26)
==569067==    by 0x402501: initilize_tst (envht.c:43)
==569067==    by 0x401A5E: envht_suite (envht.c:174)
==569067==    by 0x4017DB: main (envht.c:188)
==569067==  Address 0x1ffedff528 is on thread 1's stack
==569067==  in frame #0, created by pf_handled_s (pf_handled_s.c:48)
==569067==
==569067== Invalid read of size 8
==569067==    at 0x406881: initialize_control (pf_handled_s.c:38)
==569067==    by 0x4067C8: pf_handled_s (pf_handled_s.c:54)
==569067==    by 0x404F01: pf_vprintf (pf_vprintf.c:70)
==569067==    by 0x404D3A: ft_printf (ft_printf.c:29)
==569067==    by 0x403DA0: print_warning (print.c:22)
==569067==    by 0x403246: initilize_envht (envht.c:26)
==569067==    by 0x402501: initilize_tst (envht.c:43)
==569067==    by 0x401A5E: envht_suite (envht.c:174)
==569067==    by 0x4017DB: main (envht.c:188)
==569067==  Address 0x1ffedff528 is on thread 1's stack
==569067==  in frame #0, created by initialize_control (pf_handled_s.c:32)
*/

/**
 * @brief Prints ints, floats and strings according to a format string.
 *
 * TODO: Debug valgrind invalid read/write error.
 *
 * @param format The printf format with conversions and flags.
 * @param ... The variables to be inserted in the format string.
 * @return int If negative, an error occured.
 * If positive, the number of chars printed.
 */
int	ft_printf(const char *format, ...)
{
	t_printf	print_control;

	pf_initialize_print_control(&print_control, format);
	va_start(print_control.elements, format);
	pf_vprintf(&print_control);
	va_end(print_control.elements);
	return (print_control.chars_printed);
}
