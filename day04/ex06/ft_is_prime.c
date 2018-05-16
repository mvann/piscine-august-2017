/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 17:52:53 by mvann             #+#    #+#             */
/*   Updated: 2017/08/12 20:15:19 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
