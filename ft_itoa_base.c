/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:17:03 by tcali             #+#    #+#             */
/*   Updated: 2024/12/18 17:53:48 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_base(t_list *list, unsigned long nb)
{
	char			*result;
	size_t			base_len;
	size_t			res_len;
	unsigned long	tmp;

	base_len = ft_strlen(list->format.base);
	if (nb == 0)
		return ("0");
	res_len = 1;
	tmp = nb;
	while (tmp >= base_len)
	{
		tmp /= base_len;
		res_len++;
	}
	result = malloc(res_len + 1);
	if (!result)
		return (NULL);
	result[res_len] = '\0';
	while (res_len > 0)
	{
		result[--res_len] = list->format.base[nb % base_len];
		nb /= base_len;
	}
	return (result);
}
