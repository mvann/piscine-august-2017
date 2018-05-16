/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhite-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 10:29:47 by cwhite-s          #+#    #+#             */
/*   Updated: 2017/08/12 13:40:50 by sramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush_print_line(char start, char middle, char end, int length)
{
	int		i;

	i = 0;
	ft_putchar(start);
	while (i < length - 2)
	{
		ft_putchar(middle);
		i++;
	}
	if (length > 1)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		i;

	i = 0;
	if (y > 0 && x > 0)
	{
		rush_print_line('A', 'B', 'A', x);
		while (i < y - 2)
		{
			rush_print_line('B', ' ', 'B', x);
			i++;
		}
		if (y > 1)
		{
			rush_print_line('C', 'B', 'C', x);
		}
	}
}
