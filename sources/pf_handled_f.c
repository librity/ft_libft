/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_handled_float.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 04:05:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/02/18 23:49:34 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void	set_print_me(t_printf *print_control, t_handle_float *control)
{
	control->print_me = va_arg(print_control->elements, double);
	control->char_count = ft_count_chars_i(control->print_me);
	control->digit_count = ft_count_digits_i(control->print_me);
	if (control->print_me < 0)
		control->is_negative = true;
}

static void	initialize_control(t_printf *print_control,
								t_handle_float *control)
{
	control->print_me = 0;
	control->print_me_str = NULL;
	control->digit_count = 0;
	control->char_count = 0;
	control->is_negative = false;
	control->is_zero_with_zero_precision = false;
	pf_initialize_flag_control(print_control, &(control->flag_control));
}

static void	interpret_flags(t_parse_flags *flag_control,
	t_handle_float *control)
{
	if (flag_control->has_precision)
		if (flag_control->precision == 0 && control->print_me == 0)
			control->is_zero_with_zero_precision = true;
	control->print_me_str = ft_precise_dtoa(control->print_me,
			flag_control->precision);
	control->char_count = ft_strlen(control->print_me_str);
	control->digit_count = control->char_count;
	if (control->is_negative)
		control->digit_count--;
}

bool	pf_handled_f(t_printf *print_control)
{
	t_handle_float	control;
	t_parse_flags	*flag_control;

	if (print_control->conversion != 'f')
		return (false);
	initialize_control(print_control, &control);
	flag_control = &(control.flag_control);
	pf_parse_flags(print_control, flag_control);
	set_print_me(print_control, &control);
	interpret_flags(flag_control, &control);
	pf_print_f(print_control, &control, flag_control);
	return (true);
}
