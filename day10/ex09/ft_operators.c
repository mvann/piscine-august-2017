/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operators.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 20:07:00 by mvann             #+#    #+#             */
/*   Updated: 2017/08/22 19:58:46 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_add(int n1, int n2)
{
	ft_putnbr(n1 + n2);
}

void	ft_sub(int n1, int n2)
{
	ft_putnbr(n1 - n2);
}

void	ft_mul(int n1, int n2)
{
	ft_putnbr(n1 * n2);
}

void	ft_div(int n1, int n2)
{
	if (n2 == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(n1 / n2);
}

void	ft_mod(int n1, int n2)
{
	if (n2 == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(n1 % n2);
}
