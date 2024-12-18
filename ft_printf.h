/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:24:18 by tcali             #+#    #+#             */
/*   Updated: 2024/12/18 18:02:38 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

typedef struct s_format
{
	int		left_justif;
	int		zero_pad;
	int		plus;
	int		space;
	int		hash;
	char	specifier;
	int		width;
	int		precision;
	int		lowercase;
	int		uppercase;
	char	*base;
	char	*itoa;
	char	*str;
	int		is_negative;
	char	pad;
	int		prefix_checked;
	int		is_malloc;
}				t_format;

typedef struct s_list
{
	const char	*str;
	va_list		ap;
	int			nb_chars;
	char		*ptr;
	t_format	format;
}				t_list;

int		ft_printf(const char *format, ...);
int		ft_parse_format(t_list *list);
void	*ft_memset(void *s, int c, size_t n);
int		ft_atoi_base(t_list *list);
void	ft_render_format(t_list *list);
int		ft_present(const char *str, char c);
void	ft_printchar(t_list *list, int c, char pad);
void	ft_printstr(t_list *list, char *str);
void	ft_check_prefix(t_list *list);
void	ft_check_width(t_list *list);
void	ft_putstr(t_list *list, char *str);
void	ft_check_precision(t_list *list, char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	ft_fill_withzero(t_list *list, char *str, size_t n);
void	ft_update_itoa(t_list *list, char const *s1, char const *s2);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_print_nb(t_list *list, char speci, char pad);
void	ft_convert_nb(t_list *list, char speci);
char	*ft_itoa_base(t_list *list, unsigned long nb);
int		ft_strcpy(t_list *list, char *src);
int		ft_strlen(const char *str);
void	ft_free(t_list *list, char *str);
void	ft_putformat(t_list *list, char c);

#endif