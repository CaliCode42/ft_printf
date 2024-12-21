/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:17:03 by tcali             #+#    #+#             */
/*   Updated: 2024/12/21 20:19:51 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*static char	*ft_zero_case(t_list *list, unsigned long nb)
{
	char	*result;

	result = malloc(sizeof(char) * 2);
	result = "0";
}
*/
char	*ft_itoa_base(t_list *list, unsigned long nb)
{
	char			*result;
	size_t			base_len;
	size_t			res_len;
	unsigned long	tmp;

	base_len = ft_strlen(list->format.base);
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
