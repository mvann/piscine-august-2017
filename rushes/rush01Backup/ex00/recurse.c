#include <stdio.h>

int		ft_check_move(int **board, int line, int x, int nb)
{
	printf("\t\tLine: %d, X: %d, Val: %d, \n", line, x, board[line][x]);
	int i;
	int j;
	int i2;
	int j2;

	i = -1;
	while (++i < 9)
		if (board[line][i] == nb && i != x)
			return (0);
	printf("\t\tLine: %d, X: %d, Val: %d, \n", line, x, board[line][x]);
	i = -1;
	while (++i < 9)
		if (board[i][x] == nb && i != line)
			return (0);
	printf("\t\tLine: %d, X: %d, Val: %d, \n", line, x, board[line][x]);
	j = (line / 3) * 3;
	j2 = j;
	while (j < (j2 + 3))
	{
		i = (x / 3) * 3;
		i2 = i;
		while (i < (i2 + 3))
		{
			printf("\t\tLine: %d, X: %d, Val: %d, \n", line, x, board[line][x]);
			printf("\t\tJ: %d, I: %d, \n", j, i);
			if (board[j][i] == nb && j != line && i != x)
				return (0);
			++i;
		}
		++j;
	}
	printf("\t\tLine: %d, X: %d, Val: %d, \n", line, x, board[line][x]);
	return (1);
}

int		ft_next_x(int **board, int line, int x, int **static_board);

int		ft_next_line(int **board, int line, int x, int **static_board)
{
	printf("Line: %d, X: %d, Val: %d, \n", line, x, board[line][x]);
	if (line >= 9)
		return (1);
	else
	{
		while (ft_next_x(board, line, x, static_board))
		{
			//if (safe(board, line, x))
			//{
				if (ft_next_line(board, line + 1, 0, static_board))
					return (1);
			//}
			board[line][x]++;
		}
		//i = 0;
		//while (i < 9)
		//	board[line][i++] = 0;
		return (0);
	}
}

int		ft_next_x(int **board, int line, int x, int **static_board)
{
	printf("\tLine: %d, X: %d, Val: %d, \n", line, x, board[line][x]);
	if (x >= 9)
		return (1);
	if (static_board[line][x]) //This needs to be double checked
	{	
		board[line][x] = static_board[line][x];
		return ft_next_x(board, line, x + 1, static_board);
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
		if (ft_check_move(board, line, x, board[line][x]))
		{
			printf("\tChecked !Line: %d, X: %d, Val: %d, \n", line, x, board[line][x]);
			if (ft_next_x(board, line, x + 1, static_board))
					return (1);
		}
		board[line][x]++;
	}
	board[line][x] = 0;
	return (0);
}
