/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 21:47:21 by mvann             #+#    #+#             */
/*   Updated: 2017/08/17 23:49:51 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		rotate(int c, int starting_letter)
{
	c = (((c - starting_letter) + 42) % 26) + starting_letter;
	return (c);
}

int		rot42(int c)
{
	if ('a' <= c && c <= 'z')
		return (rotate(c, 'a'));
	else if ('A' <= c && c <= 'Z')
		return (rotate(c, 'A'));
	return (c);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = rot42(str[i]);
		i++;
	}
	return (str);
}
