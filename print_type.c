/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:57:35 by tcali             #+#    #+#             */
/*   Updated: 2024/12/18 18:03:58 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_n_char(t_list *list, int precision, char c)
{
	if (precision <= 0)
		return ;
	while (precision--)
		ft_putformat(list, c);
}

void	ft_printchar(t_list *list, int c, char pad)
{
	int		width;

	width = list->format.width;
	if (width > 1)
	{
		if (list->format.left_justif)
		{
			ft_put_n_char(list, 1, (char)c);
			ft_put_n_char(list, (width - 1), pad);
		}
		else
		{
			if (list->format.zero_pad)
				pad = '0';
			ft_put_n_char(list, (width - 1), pad);
			ft_put_n_char(list, 1, (char)c);
		}
	}
	else
		ft_put_n_char(list, 1, (char)c);
}

static void	ft_check_zeropad(t_list *list, char *str)
{
	if (list->format.zero_pad)
	{
		ft_check_prefix(list);
		ft_put_n_char(list, ((list->format.width) - ft_strlen(str)), '0');
		ft_putstr(list, str);
	}
	else
	{
		ft_put_n_char(list, ((list->format.width) - ft_strlen(str)), ' ');
		ft_putstr(list, str);
	}
}

void	ft_printstr(t_list *list, char *str)
{
	if (!str)
		str = "(null)";
	/*if (list->format.str && list->format.is_malloc)
		ft_free(list, list->format.str);
	*/list->format.str = str;
	if (list->format.precision >= 0)
		ft_check_precision(list, str);
	if (list->format.width < 1)
	{
		ft_putstr(list, str);
		return ;
	}
	if (list->format.left_justif)
	{
		ft_putstr(list, str);
		ft_put_n_char(list, ((list->format.width) - ft_strlen(str)), ' ');
	}
	else
		ft_check_zeropad(list, str);
	/*if (list->format.str && list->format.is_malloc)
		ft_free(list, list->format.str);
	if (list->format.itoa)
		free(list->format.itoa);*/
}

void	ft_print_nb(t_list *list, char speci, char pad)
{
	ft_convert_nb(list, speci);
	if (list->format.itoa)
	{
		ft_check_width(list);
		ft_printstr(list, list->format.itoa);
	}
}
