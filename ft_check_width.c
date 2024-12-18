/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:07:32 by tcali             #+#    #+#             */
/*   Updated: 2024/12/18 16:07:48 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_width(t_list *list)
{
	if (list->format.is_negative)
		list->format.width -= 1;
	if ((list->format.plus
			|| list->format.space) && (!list->format.is_negative))
		list->format.width -= 1;
	if (list->format.hash
		&& (list->format.uppercase || list->format.lowercase))
		list->format.width -= 2;
}
