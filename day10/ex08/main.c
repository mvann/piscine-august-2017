/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 21:45:26 by mvann             #+#    #+#             */
/*   Updated: 2017/08/21 23:05:26 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));

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

int		ft_strcmp(char *str1, char *str2)
{
	int i = 0;
	while (str1[i] == str2[i] && str1[i])
		i++;
	return str1[i] - str2[i];
}

char	**ft_split_whitespaces(char *str);

int		main(int argc, char **argv)
{
	int i;
	argc = 1;
	char **split;
	split = ft_split_whitespaces(argv[1]);
	i = 0;
	while (split[i])
	{
		ft_putstr(split[i++]);
		ft_putchar('\n');
	}
	ft_advanced_sort_wordtab(split, &ft_strcmp);
	i = 0;
	while (split[i])
	{
		ft_putstr(split[i++]);
		ft_putchar('\n');
	}
	return (0);
}
