#include <stdio.h>

int		ft_check_move(int **board, int line, int x, int nb)
{
	int i;
	int j;

	i = -1;
	while (++i < 9)
		if (board[line][i] == nb)
			return (0);
	i = -1;
	while (++i < 9)
		if (board[i][x] == nb)
			return (0);
	j = (line / 3) * 3;
	while (j < (j + 3))
	{
		i = (x / 3) * 3;
		while (i < (i + 3))
		{
			if (board[j][i] == nb)
				return (0);
			++i;
		}
		++j;
	}
	return (1);
}

int		ft_solution_print(int **board, int line, int x)
{
	int i;

	i = 0;
	while (i < 9)
	{
		printf("%d\n", ft_check_move(board, line, x, i + 1));
	}
	return (1);
}

int		ft_solution(int **board, int line, int x)
{
	int i;

	i = 0;
	if (line >= 9)
		return (1);
	if (board[line][x] == 0)
	{
		while (i < 9)
		{
			if (ft_check_move(board, line, x, i + 1))
			{
				board[line][x] = i;
				x >= 9 ? ft_solution(board, line + 1, 0)
					: ft_solution(board, line, x + 1);
				board[line][x] = 0;
			}
			++i;
		}
		return (0);
	}
	else
		x >= 9 ? ft_solution(board, line + 1, 0)
			: ft_solution(board, line, x + 1);
	return (0);
}
