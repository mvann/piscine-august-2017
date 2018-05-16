/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 19:53:10 by mvann             #+#    #+#             */
/*   Updated: 2017/08/20 20:18:49 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_board.h"
#include "ft_solve.h"
#include "ft_put.h"

void	ft_copy_board(int **board1, int **board2)
{
	int line;
	int x;

	line = 0;
	while (line < 9)
	{
		x = 0;
		while (x < 9)
		{
			board2[line][x] = board1[line][x];
			x++;
		}
		line++;
	}
}

int		ft_solve_board(int **board,
		int **static_board, int **second_board, char **argv)
{
	ft_initialize_board(static_board, argv);
	ft_initialize_board(second_board, argv);
	if (ft_initialize_board(board, argv))
	{
		if (ft_next_line(board, 0, 0, static_board))
		{
			ft_copy_board(board, second_board);
			second_board[8][8]++;
			if (ft_next_line(second_board, 0, 0, static_board))
			{
				ft_putstr("Error\n");
				return (0);
			}
			ft_print_board(board);
		}
		else
			ft_putstr("Error");
	}
	else
		ft_putstr("Error\n");
	return (1);
}

int		main(int argc, char **argv)
{
	int **board;
	int **static_board;
	int **second_board;

	board = (int **)malloc(sizeof(int *) * 9);
	static_board = (int **)malloc(sizeof(int *) * 9);
	second_board = (int **)malloc(sizeof(int *) * 9);
	argv++;
	if (--argc == 9)
	{
		if (!ft_solve_board(board, static_board, second_board, argv))
			return (0);
	}
	else
		ft_putstr("Error\n");
	return (0);
}
