/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:31:11 by tcali             #+#    #+#             */
/*   Updated: 2024/12/18 14:35:05 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

static int	ft_init_list(t_list *list, const char *format)
{
	list->nb_chars = 0;
	list->str = format;
	return (1);
}

int	ft_printf(const char *format, ...)
{
	t_list	list;

	va_start (list.ap, format);
	if (!ft_init_list(&list, format))
		return (-1);
	while (*list.str)
	{
		if (*list.str == '%' && list.str[1])
		{
			++list.str;
			if (ft_parse_format(&list) <= 0)
				return (0);
			ft_render_format(&list);
		}
		else
		{
			ft_putformat(&list, *list.str);
		}
		++list.str;
	}
	va_end (list.ap);
	return (list.nb_chars);
}