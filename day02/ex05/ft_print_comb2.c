/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:25:44 by mvann             #+#    #+#             */
/*   Updated: 2017/08/10 23:36:19 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_nums(int a, int b)
{
	int a1;
	int a2;
	int b1;
	int b2;

	a1 = (a - (a % 10)) / 10 + '0';
	b1 = (b - (b % 10)) / 10 + '0';
	a2 = a % 10 + '0';
	b2 = b % 10 + '0';
	ft_putchar(a1);
	ft_putchar(a2);
	ft_putchar(' ');
	ft_putchar(b1);
	ft_putchar(b2);
	if (!(a == 98 && b == 99))
	{
		ft_putchar(',');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_nums(a, b);
			b++;
		}
		a++;
	}
}
