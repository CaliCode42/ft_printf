/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putformat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:39:56 by tcali             #+#    #+#             */
/*   Updated: 2024/12/18 17:40:50 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h> 

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putformat(t_list *list, char c)
{
	ft_putchar(c);
	list->nb_chars++;
}
