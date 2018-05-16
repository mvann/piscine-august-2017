/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 20:33:26 by mvann             #+#    #+#             */
/*   Updated: 2017/08/17 21:39:59 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	initialize_2(int *i, int *k)
{
	*i = -1;
	*k = 0;
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*arr;
	int		count;

	count = 0;
	i = -1;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j++])
			count++;
	}
	arr = (char *)malloc(sizeof(char) * (count + argc));
	initialize_2(&i, &k);
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
			arr[k++] = argv[i][j++];
		arr[k++] = '\n';
	}
	arr[count + argc - 1] = '\0';
	return (arr);
}
