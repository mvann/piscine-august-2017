/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 22:29:19 by mvann             #+#    #+#             */
/*   Updated: 2017/08/11 22:50:12 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		cond_swap(int *ptr1, int *ptr2)
{
	int temp;

	if (*ptr1 > *ptr2)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		return (0);
	}
	return (1);
}

void	ft_sort_integer_table(int *tab, int size)
{
	int ordered;
	int i;

	ordered = 0;
	while (!ordered)
	{
		ordered = 1;
		i = 0;
		while (i < size - 1)
		{
			if (!cond_swap(tab + i, tab + i + 1))
			{
				ordered = 0;
			}
			i++;
		}
	}
}
