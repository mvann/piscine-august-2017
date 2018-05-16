/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhite-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 10:29:47 by cwhite-s          #+#    #+#             */
/*   Updated: 2017/08/13 18:52:33 by eito-fis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush_print_line(char start, char middle, char end, int length)
{
	ft_putchar(start);
	while (length > 2)
	{
		ft_putchar(middle);
		length -= 1;
	}
	if (length > 1)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (y > 0 && x > 0)
	{
		rush_print_line('A', 'B', 'C', x);
		while (y > 2)
		{
			rush_print_line('B', ' ', 'B', x);
			y -= 1;
		}
		if (y > 1)
		{
			rush_print_line('C', 'B', 'A', x);
		}
	}
}
