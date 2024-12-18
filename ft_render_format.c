/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:51:18 by tcali             #+#    #+#             */
/*   Updated: 2024/12/18 15:46:01 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_render_format(t_list *list)
{
	char	specifier;
	char	pad;

	specifier = list->format.specifier;
	pad = list->format.pad;
	pad = ' ';
	if (specifier == '%')
		ft_printchar(list, '%', pad);
	else if (specifier == 'c')
		ft_printchar(list, va_arg(list->ap, int), pad);
	else if (specifier == 's')
		ft_printstr(list, va_arg(list->ap, char *));
	if (ft_present("pdiuxX", specifier))
		ft_print_nb(list, specifier, pad);
}
