/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 19:14:40 by mvann             #+#    #+#             */
/*   Updated: 2017/08/10 23:39:19 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	put_array(int array[], int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_putchar(array[i] + '0');
		i++;
	}
	if (array[0] != 10 - size)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	populate_array(int array[], int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		array[i] = i;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int i;
	int digits[n];

	populate_array(digits, n);
	i = 0;
	while (digits[0] != 10 - n)
	{
		if (digits[n - i - 1] == 9 - i)
		{
			put_array(digits, n);
			digits[n - i - 2]++;
			digits[n - i - 1] = digits[n - i - 2] + 1;
			i++;
		}
		else if (i > 0)
		{
			i--;
		}
		else
		{
			put_array(digits, n);
			digits[n - i - 1]++;
		}
	}
	put_array(digits, n);
}
