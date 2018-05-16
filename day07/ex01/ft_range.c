/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 14:53:02 by mvann             #+#    #+#             */
/*   Updated: 2017/08/17 16:19:54 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int range;
	int i;
	int *arr;

	range = max - min;
	if (range <= 0)
		return (0);
	arr = (int *)malloc(sizeof(int) * range);
	i = 0;
	while (i < range)
	{
		arr[i] = i + min;
		i++;
	}
	return (arr);
}
