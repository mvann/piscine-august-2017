/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:26:49 by mvann             #+#    #+#             */
/*   Updated: 2017/08/11 14:50:43 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		str_len;
	char	temp;

	str_len = 0;
	while (str[str_len] != 0)
	{
		str_len++;
	}
	i = 0;
	while (i <= ((str_len + 1) / 2) - 1)
	{
		temp = str[i];
		str[i] = str[str_len - 1 - i];
		str[str_len - 1 - i] = temp;
		i++;
	}
	return (str);
}
