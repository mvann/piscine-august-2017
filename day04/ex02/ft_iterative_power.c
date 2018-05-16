/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 15:47:33 by mvann             #+#    #+#             */
/*   Updated: 2017/08/12 15:54:26 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int product;

	if (power < 0)
	{
		return (0);
	}
	product = 1;
	i = 0;
	while (i < power)
	{
		product *= nb;
		i++;
	}
	return (product);
}
