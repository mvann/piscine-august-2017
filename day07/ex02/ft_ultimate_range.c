/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 16:16:13 by mvann             #+#    #+#             */
/*   Updated: 2017/08/17 18:57:20 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *arr;
	int count;

	count = max - min;
	if (count <= 0)
	{
		range = 0;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * count);
	i = 0;
	while (i < count)
	{
		arr[i] = i + min;
		i++;
	}
	*range = arr;
	return (sizeof(range));
}
