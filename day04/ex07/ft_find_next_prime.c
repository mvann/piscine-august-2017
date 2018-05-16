/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 20:16:27 by mvann             #+#    #+#             */
/*   Updated: 2017/08/12 20:43:13 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_prime(int nb)
{
	int i;

	if ((nb < 2 || nb % 2 == 0) && nb != 2)
	{
		return (0);
	}
	i = 1;
	while (i * i <= nb && i * i > 0)
	{
		if (nb % (i * 2 + 1) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
	{
		return (2);
	}
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
