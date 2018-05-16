/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 19:52:57 by mvann             #+#    #+#             */
/*   Updated: 2017/08/20 20:10:09 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_solve.h"

int		ft_check_move(int **board, int line, int x, int nb)
{
	int i;
	int j;
	int i2;
	int j2;

	i = -1;
	while (++i < 9 && i < x)
		if (board[line][i] == nb)
			return (0);
	i = -1;
	while (++i < 9 && i < line)
		if (board[i][x] == nb)
			return (0);
	j = (line / 3) * 3;
	j2 = j;
	while (j < (j2 + 3) && j <= line)
	{
		i = (x / 3) * 3 - 1;
		i2 = i + 1;
		while (++i < (i2 + 3) && (j == line ? i < x : 1))
			if (board[j][i] == nb)
				return (0);
		++j;
	}
	return (1);
}

int		ft_check_move_static(int **board, int line, int x, int nb)
{
	int i;
	int j;
	int i2;
	int j2;

	i = -1;
	while (++i < 9)
		if (board[line][i] == nb && i != x)
			return (0);
	i = -1;
	while (++i < 9)
		if (board[i][x] == nb && i != line)
			return (0);
	j = (line / 3) * 3;
	j2 = j;
	while (j < (j2 + 3))
	{
		i = (x / 3) * 3 - 1;
		i2 = i + 1;
		while (++i < (i2 + 3))
			if (board[j][i] == nb && j != line && i != x)
				return (0);
		++j;
	}
	return (1);
}

int		ft_next_line(int **board, int line, int x, int **static_board)
{
	if (line >= 9)
		return (1);
	else
	{
		return (ft_next_x(board, line, x, static_board));
	}
}

int		ft_next_x(int **board, int line, int x, int **static_board)
{
	if (x >= 9)
		return (ft_next_line(board, line + 1, 0, static_board));
	if (static_board[line][x])
	{
		return (ft_next_x(board, line, x + 1, static_board));
	}
	if (board[line][x] == 0)
		board[line][x]++;
	else if (board[line][x] > 9)
	{
		board[line][x] = 0;
		return (0);
	}
	while (board[line][x] <= 9)
	{
		if (ft_check_move(board, line, x, board[line][x])
				&& ft_check_move_static(static_board, line, x, board[line][x]))
		{
			if (ft_next_x(board, line, x + 1, static_board))
				return (1);
		}
		board[line][x]++;
	}
	board[line][x] = 0;
	return (0);
}
