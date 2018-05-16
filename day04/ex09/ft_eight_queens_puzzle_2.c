/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 23:03:36 by mvann             #+#    #+#             */
/*   Updated: 2017/08/12 23:16:09 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	put_queens(int *queens, int num_queens)
{
	int i;

	i = 0;
	while (i < num_queens)
	{
		ft_putchar((queens[i] + 1) + '0');
		i++;
	}
	ft_putchar('\n');
}

int		safe(int q_i, int *queens)
{
	int i;

	i = 0;
	while (i < q_i)
	{
		if (queens[i] == queens[q_i])
		{
			return (0);
		}
		else if (queens[i] - queens[q_i] == q_i - i)
		{
			return (0);
		}
		else if (queens[q_i] - queens[i] == q_i - i)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	next_queen(int q_i, int *queens, int num_queens)
{
	if (q_i == num_queens)
	{
		put_queens(queens, num_queens);
	}
	else
	{
		queens[q_i] = 0;
		while (queens[q_i] < num_queens)
		{
			if (safe(q_i, queens))
			{
				next_queen(q_i + 1, queens, num_queens);
			}
			queens[q_i]++;
		}
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int num_queens;
	int queens[8];
	int initial_q_i;
	int i;

	num_queens = 8;
	i = 0;
	while (i < num_queens)
	{
		queens[i] = 0;
		i++;
	}
	initial_q_i = 0;
	next_queen(initial_q_i, queens, num_queens);
}
