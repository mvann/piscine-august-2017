/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eito-fis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 18:52:51 by eito-fis          #+#    #+#             */
/*   Updated: 2017/08/13 18:52:53 by eito-fis         ###   ########.fr       */
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
		rush_print_line('A', 'B', 'C', x);
		while (i < y - 2)
		{
			rush_print_line('B', ' ', 'B', x);
			i++;
		}
		if (y > 1)
		{
			rush_print_line('A', 'B', 'C', x);
		}
	}
}
