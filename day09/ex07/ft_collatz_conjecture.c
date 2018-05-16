/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 12:30:52 by mvann             #+#    #+#             */
/*   Updated: 2017/08/18 12:49:00 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 0)
		return (-1);
	else if (base == 1)
		return (0);
	else
		return (1 + ft_collatz_conjecture(base % 2 == 0 ?
					base / 2 : base * 3 + 1));
}
