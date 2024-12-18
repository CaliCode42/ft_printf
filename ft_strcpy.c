/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:47:07 by tcali             #+#    #+#             */
/*   Updated: 2024/12/11 22:58:00 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strcpy(t_list *list, char *src)
{
	char	*dst;

	if (!list || !src)
		return (0);
	list->format.itoa = malloc (sizeof(char) * (ft_strlen(src) + 1));
	if (!list->format.itoa)
		return (0);
	dst = list->format.itoa;
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (1);
}