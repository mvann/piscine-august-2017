/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 16:35:43 by mvann             #+#    #+#             */
/*   Updated: 2017/08/14 18:59:48 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int to_find_len;
	int i;
	int found;

	if (*to_find == '\0')
		return (str);
	to_find_len = 0;
	while (to_find[to_find_len] != '\0')
		to_find_len++;
	while (*(str + to_find_len - 1) != '\0')
	{
		found = 1;
		i = 0;
		while (i < to_find_len)
		{
			if (str[i] != to_find[i])
				found = 0;
			i++;
		}
		if (found)
			return (str);
		str++;
	}
	return (0);
}
