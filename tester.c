/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:45:59 by tcali             #+#    #+#             */
/*   Updated: 2024/12/21 00:06:15 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_test_char(char c)
{
	int	n ;

	n = 10;
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is a char [%c].\n", c));
	printf("\treal_function = %d\n",
		printf("real_function : This is a char [%c].\n", c));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is a char [%10c].\n", c));
	printf("\treal_function = %d\n",
		printf("real_function : This is a char [%10c].\n", c));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is a char [%-10c].\n", c));
	printf("\treal_function = %d\n",
		printf("real_function : This is a char [%-10c].\n", c));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is a char [%-*c].\n", n, c));
	printf("\treal_function = %d\n",
		printf("real_function : This is a char [%-*c].\n", n, c));
}

void	ft_test_str(char *str)
{
	char	n;

	n = 10;
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is a str [%s].\n", str));
	printf("\treal_function = %d\n",
		printf("real_function : This is a str [%s].\n", str));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is a str [%10s].\n", str));
	printf("\treal_function = %d\n",
		printf("real_function : This is a str [%10s].\n", str));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is a str [%-10s].\n", str));
	printf("\treal_function = %d\n",
		printf("real_function : This is a str [%-10s].\n", str));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is a str [%-*s].\n", n, str));
	printf("\treal_function = %d\n",
		printf("real_function : This is a str [%-*s].\n", n, str));
}

void	ft_test_nb(int nb)
{
	char	n;
	void	*ptr;

	n = 10;
	ptr = 0;
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an int [%.1d].\n", nb));
	printf("\treal_function = %d\n",
		printf("real_function : This is an int [%.1d].\n", nb));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an int [%10.2d].\n", nb));
	printf("\treal_function = %d\n",
		printf("real_function : This is an int [%10.2d].\n", nb));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an hexa [%p].\n", ptr));
	printf("\treal_function = %d\n",
		printf("real_function : This is an hexa [%p].\n", ptr));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an hexa [%10p].\n", ptr));
	printf("\treal_function = %d\n",
		printf("real_function : This is an hexa [%10p].\n", ptr));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an hexa [%x].\n", nb));
	printf("\treal_function = %d\n",
		printf("real_function : This is an hexa [%x].\n", nb));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an HEXA [%X].\n", nb));
	printf("\treal_function = %d\n",
		printf("real_function : This is an HEXA [%X].\n", nb));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an int [%10d].\n", nb));
	printf("\treal_function = %d\n",
		printf("real_function : This is an int [%10d].\n", nb));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an unsigned int [%10u].\n", nb));
	printf("\treal_function = %d\n",
		printf("real_function : This is an unsigned int [%10u].\n", nb));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an int [%-10d].\n", nb));
	printf("\treal_function = %d\n",
		printf("real_function : This is an int [%-10d].\n", nb));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an int [%-*d].\n", n, nb));
	printf("\treal_function = %d\n",
		printf("real_function : This is an int [%-*d].\n", n, nb));
}

void	ft_test_otherflags(int nb)
{
	int		n;
	void	*ptr;

	n = 10;
	ptr = 42;
	printf("testing hash :\n");
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an hexa [%#x].\n", nb));
	printf("\treal_function = %d\n",
		printf("real_function : This is an hexa [%#x].\n", nb));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an HEXA [%X].\n", nb));
	printf("\treal_function = %d\n",
		printf("real_function : This is an HEXA [%X].\n", nb));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an hexa [%#-10x].\n", nb));
	printf("\treal_function = %d\n",
		printf("real_function : This is an hexa [%#-10x].\n", nb));
	printf("\n");
	printf("testing plus :\n");
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an int [%+d].\n", nb));
	printf("\treal_function = %d\n",
		printf("real_function : This is an int [%+d].\n", nb));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an int [%-+*d].\n", n, nb));
	printf("\treal_function = %d\n",
		printf("real_function : This is an int [%-+*d].\n", n, nb));
	printf("\n");
	printf("testing space :\n");
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an int [% i].\n", nb));
	printf("\treal_function = %d\n",
		printf("real_function : This is an int [% i].\n", nb));
	printf("\n");
	printf("testing zero padding :\n");
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an hexa [%010p].\n", ptr));
	printf("\treal_function = %d\n",
		printf("real_function : This is an hexa [%010p].\n", ptr));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an int [%010i].\n", nb));
	printf("\treal_function = %d\n",
		printf("real_function : This is an int [%010i].\n", nb));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an int [%0-10i].\n", nb));
	printf("\treal_function = %d\n",
		printf("real_function : This is an int [%0-10i].\n", nb));
	printf("testing dot :\n");
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an int [%.1d].\n", nb));
	printf("\treal_function = %d\n",
		printf("real_function : This is an int [%.1d].\n", nb));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is a str [%.s].\n", "-"));
	printf("\treal_function = %d\n",
		printf("real_function : This is a str [%.s].\n", "-"));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is a str [%.1s] [%.2s] [%.3s] [%.4s].\n", " - ", "", "4", ""));
	printf("\treal_function = %d\n",
		printf("real_function : This is a str [%.1s] [%.2s] [%.3s] [%.4s].\n", " - ", "", "4", ""));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an hexa [%.4p].\n", ptr));
	printf("\treal_function = %d\n",
		printf("real_function : This is an hexa [%.4p].\n", ptr));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an int [%10.4i].\n", nb));
	printf("\treal_function = %d\n",
		printf("real_function : This is an int [%10.4i].\n", nb));
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : This is an int [%010.4i].\n", nb));
	printf("\treal_function = %d\n",
		printf("real_function : This is an int [%010.4i].\n", nb));
}

int	main(void)
{
	printf("testing char :\n");
	printf("\n");
	ft_test_char('A');
	printf("_______________________________________________________");
	printf("\n");
	printf("testing str :\n");
	printf("\n");
	ft_test_str("42");
	ft_test_str(NULL);
	printf("_______________________________________________________");
	printf("\n");
	printf("testing nb :\n");
	printf("\n");
	ft_test_nb(-1);
	printf("_______________________________________________________");
	printf("\n");
	printf("testing other flags :\n");
	printf("\n");
	ft_test_otherflags(42);
	printf("_______________________________________________________");
	printf("\n");
	printf("\tmine_function = %d\n",
		ft_printf("mine_function : [%%].\n"));
	printf("\treal_function = %d\n",
		printf("real_function : [%%].\n"));
	printf("\n");
}

	/*printf("\n\n");
	printf("ft_pickstr : list->format.str = [%s]", list->format.str);
	printf("\n\n");
	printf("ft_pickstr : list->format.itoa = [%s]", list->format.itoa);
	printf("\n\n");*/