/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 17:44:57 by mvann             #+#    #+#             */
/*   Updated: 2017/08/15 23:05:54 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		valid_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int		ft_pow(int n, int pow)
{
	if (pow == 0)
		return (1);
	else if (pow == 1)
		return (n);
	else
		return (n * ft_pow(n, pow - 1));
}

void	ft_put_digits(int nbr, int exponent, char *base, int base_len)
{
	if (exponent == 0)
		ft_putchar(base[nbr]);
	else
	{
		ft_putchar(base[nbr / ft_pow(base_len, exponent)]);
		ft_put_digits(nbr % ft_pow(base_len, exponent),
				exponent - 1, base, base_len);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_len;
	int exponent;

	if (valid_base(base))
	{
		base_len = 0;
		while (base[base_len] != '\0')
			base_len++;
		exponent = 0;
		while (ft_pow(base_len, exponent + 1) <= nbr)
			exponent++;
		ft_put_digits(nbr, exponent, base, base_len);
	}
}
