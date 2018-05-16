/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 14:01:21 by mvann             #+#    #+#             */
/*   Updated: 2017/08/13 17:32:31 by fedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_put_first_line(int x, int xi)
{
	if (xi == 0)
	{
		ft_putchar('/');
	}
	else if (xi == x - 1)
	{
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('*');
	}
}

void	ft_put_last_line(int x, int xi)
{
	if (xi == 0)
	{
		ft_putchar('\\');
	}
	else if (xi == x - 1)
	{
		ft_putchar('/');
	}
	else
	{
		ft_putchar('*');
	}
}

void	ft_put_line(int x, int y, int xi, int yi)
{
	if (yi == 0)
	{
		ft_put_first_line(x, xi);
	}
	else if (yi == y - 1)
	{
		ft_put_last_line(x, xi);
	}
	else
	{
		if (xi == 0 || xi == x - 1)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}

void	rush(int x, int y)
{
	int xi;
	int yi;

	yi = 0;
	while (yi < y)
	{
		xi = 0;
		while (xi < x)
		{
			ft_put_line(x, y, xi, yi);
			xi++;
		}
		ft_putchar('\n');
		yi++;
	}
}
