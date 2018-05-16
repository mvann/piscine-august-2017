/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 21:42:00 by mvann             #+#    #+#             */
/*   Updated: 2017/08/17 23:11:01 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		is_ws(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v');
}

int		count_words(char *str)
{
	int was_ws;
	int count;

	count = 0;
	was_ws = 1;
	while (*str)
	{
		if (was_ws && !is_ws(*str))
		{
			count++;
		}
		was_ws = is_ws(*str);
		str++;
	}
	return (count++);
}

int		ft_wordlen(char *str)
{
	int count;

	count = 0;
	while (str[count] && !is_ws(str[count]))
		count++;
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		k;
	int		num_words;
	char	**out;

	num_words = count_words(str);
	out = (char **)malloc(sizeof(char *) * (num_words + 1));
	i = -1;
	while (++i < num_words)
	{
		k = 0;
		while (is_ws(*str))
			str++;
		out[i] = (char *)malloc(sizeof(char) * (ft_wordlen(str) + 1));
		while (k < ft_wordlen(str))
		{
			out[i][k] = str[k];
			k++;
		}
		out[i][k] = '\0';
		str += ft_wordlen(str);
	}
	out[num_words] = 0;
	return (out);
}
