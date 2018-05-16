/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 13:50:16 by mvann             #+#    #+#             */
/*   Updated: 2017/08/15 22:03:13 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int sum;
	int i;
	int negative;

	i = 0;
	sum = 0;
	negative = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		negative = str[i] == '-';
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum *= 10;
		sum += str[i] - '0';
		i++;
	}
	if (negative == 1)
		return (sum * -1);
	return (sum);
}
