/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 21:45:26 by mvann             #+#    #+#             */
/*   Updated: 2017/08/17 18:58:05 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	if (nb <= 9 && nb * -1 <= 9 && nb != -2147483648)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		if (nb < 0)
		{
			nb = nb * -1;
		}
		if (nb == -2147483648)
		{
			nb = 8;
		}
		ft_putnbr(nb % 10);
	}
}

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int min = 0;
	int max = 0;
	int i;
	int **range;
	int *temp = &min;
	range = &temp;
   	int size = ft_ultimate_range(range, min, max);
	i = 0;
	while (i < max - min)
	{
		ft_putnbr((*range)[i++]);
		ft_putstr(",");
		i % 10 == 0 ? ft_putchar('\n') : ft_putchar(' ');
	}
	ft_putnbr(size);
	return (0);
}
