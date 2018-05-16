/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 17:34:53 by mvann             #+#    #+#             */
/*   Updated: 2017/08/21 17:49:49 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *out;
	int i;

	out = (int*)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		out[i] = (*f)(tab[i]);
		i++;
	}
	return (out);
}
