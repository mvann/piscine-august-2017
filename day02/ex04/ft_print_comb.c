/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 13:53:19 by mvann             #+#    #+#             */
/*   Updated: 2017/08/10 16:35:51 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a++ < '7')
	{
		b = a;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar(a - 1);
				ft_putchar(b);
				ft_putchar(c++);
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
	}
	ft_putchar('7');
	ft_putchar('8');
	ft_putchar('9');
}
