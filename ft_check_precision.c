/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_precision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 02:40:04 by tcali             #+#    #+#             */
/*   Updated: 2024/12/21 20:39:50 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_update_itoa(t_list *list, char const *s1, char const *s2)
{
	char	*joined;

	joined = ft_strjoin(s1, s2);
	if (!joined)
		return ;
	if (list->format.itoa)
		free(list->format.itoa);
	list->format.itoa = joined;
}

static void	ft_handle_precision_nb(t_list *list, char *str)
{
	int		precision;
	char	*copy;
	int		str_len;

	precision = list->format.precision;
	str_len = ft_strlen(str);
	if (precision < list->format.width && list->format.zero_pad)
		list->format.zero_pad = 0;
	if (precision > ft_strlen(str))
	{
		copy = malloc(sizeof(char) * precision + 1);
		if (!copy)
			return ;
		ft_fill_withzero(copy, (precision - str_len));
		ft_update_itoa(list, copy, list->format.itoa);
		free(copy);
	}
	return ;
}

void	ft_check_precision(t_list *list, char *str)
{
	if (ft_present("pdiuxX", list->format.specifier))
	{
		ft_handle_precision_nb(list, str);
	}
	else
		return ;
}
