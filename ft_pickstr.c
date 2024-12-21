/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pickstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 23:17:43 by tcali             #+#    #+#             */
/*   Updated: 2024/12/21 00:00:23 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_pickstr(t_list *list)
{
	if (list->format.specifier == 's')
		ft_putstr(list, list->format.str);
	else if (ft_present("pdiuxX", list->format.specifier))
		ft_putstr(list, list->format.itoa);
	return ;
}
