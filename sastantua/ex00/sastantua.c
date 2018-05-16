/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 13:31:09 by mvann             #+#    #+#             */
/*   Updated: 2017/08/13 21:38:02 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);

int		num_ast(int lvl)
{
	if (lvl == 0)
		return (0);
	else if (lvl == 1)
		return (3);
	return (lvl + 2 + num_ast(lvl - 1));
}

int		num_extra(int lvl)
{
	if (lvl == 0)
		return (0);
	return (((lvl + 1) / 2) * 2 + 2 + num_extra(lvl - 1));
}

void	put_spaces(int a_spaces, int b_spaces, int size, int indent)
{
	int i;

	i = 0;
	while (i++ < a_spaces + b_spaces + size + 1 - indent)
		ft_putchar(' ');
	ft_putchar('/');
}

void	put_line(int lvl, int size, int row)
{
	int i;
	int a;
	int b;
	int not_door;

	a = num_ast(lvl) * 2;
	b = num_extra(lvl);
	not_door = (a / 2) + (b / 2) + row;
	put_spaces(num_ast(size - 1), num_extra(size - 1) / 2, size, not_door);
	i = 0;
	while (i < a + b + (row * 2) + 1)
	{
		if (row == size - ((size + 1) / 2) + 2 && size > 4
				&& lvl == size - 1 && i == not_door + (lvl / 2) - 1)
			ft_putchar('$');
		else if (lvl == size - 1 && i >= not_door - (lvl / 2)
				&& i < not_door + (lvl / 2) + 1 && row >= 3 - size % 2)
			ft_putchar('|');
		else
			ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	sastantua(int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < i + 3)
		{
			put_line(i, size, j);
			j++;
		}
		i++;
	}
}
