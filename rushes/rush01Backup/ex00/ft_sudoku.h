#ifndef FT_SUDOKU_H
# define FT_SUDOKU_H

int		ft_solve(int **board, int col, int row);
int		ft_exist(int row, int col);
int		ft_exist_column(int col);
int		ft_exist_row(int row);
int		ft_exist_box(int row, int col);

#endif
