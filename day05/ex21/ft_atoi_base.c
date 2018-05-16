/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 20:51:02 by mvann             #+#    #+#             */
/*   Updated: 2017/08/15 22:41:47 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		valid_str(char *str, char *base)
{
	int i;
	int j;
	int found;

	i = 0;
	i += (str[0] == '+' || str[0] == '-');
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		found = 0;
		j = 0;
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
				found = 1;
			j++;
		}
		if (i > 0 && (str[i] == '+' || str[i] == '-'))
			return (0);
		if (!found)
			return (0);
		i++;
	}
	return (1);
}

int		get_value(char c, char *base, int exponent)
{
	int base_len;
	int base_index;

	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	base_index = 0;
	while (base[base_index] != c)
		base_index++;
	return (base_index * ft_pow(base_len, exponent));
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int value;
	int str_size;
	int exponent;

	if (valid_base(base) && valid_str(str, base))
	{
		str_size = 0;
		while (str[str_size] != '\0')
			str_size++;
		sign = 1;
		i = 0;
		if (str[0] == '+' || str[0] == '-')
			sign += ((str[i++] == '-') * -2);
		value = 0;
		while (str[i] != '\0')
		{
			exponent = str_size - 1 - i;
			value += get_value(str[i++], base, exponent);
		}
		return (value * sign);
	}
	else
		return (0);
}
