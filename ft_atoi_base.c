/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:25:10 by tcali             #+#    #+#             */
/*   Updated: 2024/12/09 18:08:21 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_atoi_base(t_list *list)
{
	const char	*numbers;
	int		numerator;

	numbers = "0123456789";
	numerator = 0;
	while (ft_present(numbers, *list->str))
		numerator = (numerator * 10) + (*list->str++ - '0');
	return (numerator);
}
