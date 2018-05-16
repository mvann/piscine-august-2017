/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mvann.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 16:16:17 by mvann             #+#    #+#             */
/*   Updated: 2017/08/27 21:31:23 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_header.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char *ft_str_append(char *str, char c, int len)
{
	char *tmp;
	int i;

	tmp = (char *)malloc(len + 1);
	i = 0;
	while (i < len - 1)
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[len - 1] = c;
	tmp[len] = 0;
	free(str);
	return (tmp);
}

/*void	ft_test(char *str)
{
	int last_true;

	last_true = 0;
	if (ft_test_rush00(str, last_true))
		last_true = 1;
	if (ft_test_rush01(str, last_true))
		last_true = 1;
	if (ft_test_rush02(str, last_true))
		last_true = 1;
	if (ft_test_rush03(str, last_true))
		last_true = 1;
	if (ft_test_rush04(str, last_true))
		last_true = 1;
}*/

int		main(void)
{
	int		ret;
	int		len;
	char	*str;
	char	c;

	len = 0;
	ret = read(0, &c, 1);
	while (ret != 0)
	{
		len++;
		str = ft_str_append(str, c, len);
		ret = read(0, &c, 1);
	}
	printf("Str: %s", str);
	//ft_test(str);
	return (0);
}
