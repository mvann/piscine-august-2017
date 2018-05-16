/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_board.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 19:52:10 by mvann             #+#    #+#             */
/*   Updated: 2017/08/20 20:24:24 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_board.h"

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		ft_validate_args(char **argv)
{
	int i;
	int j;
	int k;

	i = -1;
	j = 0;
	k = 0;
	while (++i < 9)
	{
		j = 0;
		while (argv[i][j])
		{
			if (j >= 9)
				return (0);
			if ((argv[i][j] < '1' || argv[i][j] > '9') && argv[i][j] != '.')
				return (0);
			k = j + 1;
			while (argv[i][k])
			{
				if (argv[i][j] != '.' && argv[i][j] == argv[i][k])
					return (0);
				k++;
			}
			j++;
		}
	}
	return (1);
}

int		ft_initialize_board(int **board, char **argv)
{
	int line;
	int x;

	if (!ft_validate_args(argv))
		return (0);
	line = 0;
	while (line < 9)
	{
		x = 0;
		board[line] = (int *)malloc(sizeof(int) * 9);
		while (x < 9)
		{
			board[line][x] = (argv[line][x] == '.') ? 0 : argv[line][x] - '0';
			x++;
		}
		line++;
	}
	return (1);
}

void	ft_print_board(int **board)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(board[i][j] + '0');
			if (j < 8)
				ft_putchar(' ');
			++j;
		}
		ft_putchar('\n');
		++i;
	}
}
