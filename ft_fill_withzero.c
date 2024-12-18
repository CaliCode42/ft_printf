/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_withzero.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:31:39 by tcali             #+#    #+#             */
/*   Updated: 2024/12/18 17:24:02 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_fill_withzero(t_list *list, char *str, size_t n)
{
	char	*ptr;

	ptr = str;
	while (n--)
		*ptr++ = '0';
	*ptr++ = '\0';
}
