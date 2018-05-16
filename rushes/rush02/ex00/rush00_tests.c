/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eito-fis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 18:59:43 by eito-fis          #+#    #+#             */
/*   Updated: 2017/08/27 21:12:04 by eito-fis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_test_rush00(char *str, int last_true)
{
	int height;
	int i;
	int c;

	i = 0;
	c = 0;
	height = 0;
	while (str[i])
	{
		if (CKCHAR('o', 'o', 'o', 'o', i, height))
			c++;
		else
			if (CKFILL('-', '|', str[i]))
				return (0);
		if (str[i] == '\n')
			height++;
		i++;
	}
	if (c == 4 || (c == 2))
	{
		ft_ptest("rush-00", (i - height) / height, height, last_true);
		return (1);
	}
	return (0);
}

int		ft_test_rush01(char *str, int last_true)
{
	return (0);
}

int		ft_test_rush02(char *str, int last_true)
{
	return (0);
}

int		ft_test_rush03(char *str, int last_true)
{
	return (0);
}

int		ft_test_rush04(char *str, int last_true)
{
	return (0);
}
