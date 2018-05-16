/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 20:15:38 by mvann             #+#    #+#             */
/*   Updated: 2017/08/14 21:16:49 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int last_char_was_ws;

	last_char_was_ws = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (last_char_was_ws)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] + ('A' - 'a');
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ('a' - 'A');
		last_char_was_ws = (!(str[i] >= '0' && str[i] <= '9') &&
				!(str[i] >= 'A' && str[i] <= 'Z') &&
				!(str[i] >= 'a' && str[i] <= 'z'));
		i++;
	}
	return (str);
}
