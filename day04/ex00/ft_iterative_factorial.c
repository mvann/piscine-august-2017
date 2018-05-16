/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 12:11:02 by mvann             #+#    #+#             */
/*   Updated: 2017/08/12 13:41:11 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int product;

	product = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		product *= nb;
		nb--;
	}
	return (product);
}
