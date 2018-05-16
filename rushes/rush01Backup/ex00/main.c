#include <stdlib.h>
#include <unistd.h>
#include "ft_board.h"
#include "ft_sudoku.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_check_move(int **board, int line, int x, int nb);

int		ft_next_line(int **board, int line, int x, int **static_board);

int		ft_next_x(int **board, int line, int x, int **static_board);

int		main(int argc, char **argv)
{
	int **board;
	int **static_board;
	board = (int **)malloc(sizeof(int *) * 9);
	static_board = (int **)malloc(sizeof(int *) * 9);
	argv++;
	argc--;
	if (argc == 9)
	{
		ft_initialize_board(static_board, argv);
		if (ft_initialize_board(board, argv))
		{
			if (ft_next_line(board, 0, 0, static_board))
				ft_print_board(board);
			else
				ft_putstr("No solution found.");
		}
	}
	else
		ft_putstr("Error");
	ft_putstr("\n");
	return (0);
}
