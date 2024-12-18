/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 00:01:57 by tcali             #+#    #+#             */
/*   Updated: 2024/12/18 15:51:22 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

void	ft_check_prefix(t_list *list)
{
	if (ft_present("cs", list->format.specifier)
		|| list->format.prefix_checked)
		return ;
	if (list->format.is_negative)
		ft_putformat(list, '-');
	else if (list->format.hash)
	{
		if (list->format.uppercase)
		{
			ft_putformat(list, '0');
			ft_putformat(list, 'X');
		}
		else if (list->format.lowercase)
		{
			ft_putformat(list, '0');
			ft_putformat(list, 'x');
		}
	}
	else if (list->format.space && !list->format.is_negative)
		ft_putformat(list, ' ');
	else if (list->format.plus && !list->format.is_negative)
		ft_putformat(list, '+');
	list->format.prefix_checked = 1;
}

void	ft_putstr(t_list *list, char *str)
{
	if (!str)
		return ;
	ft_check_prefix(list);
	while (*str)
	{
		ft_putformat(list, *str);
		str++;
	}
}
