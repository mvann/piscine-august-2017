/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 19:34:41 by mvann             #+#    #+#             */
/*   Updated: 2017/08/22 20:42:09 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_opp.h"

int		ft_strcmp(char *str1, char *str2)
{
	while (*str1 == *str2 && *str1)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	(*ft_arg_to_ft(char *str))(int, int)
{
	int i;

	i = 0;
	while (ft_strcmp(g_opptab[i].opp, "") != 0)
	{
		if (ft_strcmp(g_opptab[i].opp, str) == 0)
			return (g_opptab[i].ft);
		i++;
	}
	return (g_opptab[i].ft);
}

void	ft_usage(int n1, int n2)
{
	int i;

	n1 = 0;
	n2 = 0;
	ft_putstr("error : only [ ");
	i = 0;
	while (ft_strcmp(g_opptab[i].opp, "") != 0)
	{
		ft_putstr(g_opptab[i].opp);
		ft_putchar(' ');
		i++;
	}
	ft_putstr("] are accepted.");
}

int		main(int argc, char **argv)
{
	argc--;
	argv++;
	if (argc == 3)
	{
		(*(ft_arg_to_ft(argv[1])))(ft_atoi(argv[0]), ft_atoi(argv[2]));
		ft_putchar('\n');
	}
	return (0);
}
