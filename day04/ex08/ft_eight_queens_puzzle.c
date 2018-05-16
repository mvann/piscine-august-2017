/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 20:55:20 by mvann             #+#    #+#             */
/*   Updated: 2017/08/12 23:01:38 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	next_queen(int q_i, int *queens, int num_queens, int *count)
{
	if (q_i == num_queens)
	{
		*count = *count + 1;
	}
	else
	{
		queens[q_i] = 0;
		while (queens[q_i] < num_queens)
		{
			if (safe(q_i, queens))
			{
				next_queen(q_i + 1, queens, num_queens, count);
			}
			queens[q_i]++;
		}
	}
}

int		ft_eight_queens_puzzle(void)
{
	int num_queens;
	int queens[8];
	int count;
	int initial_q_i;
	int i;

	num_queens = 8;
	i = 0;
	while (i < num_queens)
	{
		queens[i] = 0;
		i++;
	}
	count = 0;
	initial_q_i = 0;
	next_queen(initial_q_i, queens, num_queens, &count);
	return (count);
}
