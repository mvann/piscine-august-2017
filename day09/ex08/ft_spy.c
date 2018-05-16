/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 12:53:45 by mvann             #+#    #+#             */
/*   Updated: 2017/08/18 13:42:13 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char	to_lower(char c)
{
	return ((c >= 'A' && c <= 'Z') ? c + ('a' - 'A') : c);
}

int		str_len(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		ft_strstr(char *str, char *to_find)
{
	int to_find_len;
	int i;
	int found;

	to_find_len = str_len(to_find);
	if (str_len(str) < to_find_len)
		return (0);
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v')
		str++;
	while (*str && *(str + to_find_len - 1) != '\0')
	{
		found = 1;
		i = -1;
		while (++i < to_find_len)
			found = found && (to_lower(str[i]) == to_find[i]) ? 1 : 0;
		if (found)
			return (1);
		while (!(*str == ' ' || *str == '\t' || *str == '\n'
					|| *str == '\v') && *str)
			str++;
		while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v')
			str++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (ft_strstr(argv[i], "president")
				|| ft_strstr(argv[i], "attack")
				|| ft_strstr(argv[i], "powers"))
		{
			ft_putstr("Alert!!!\n");
			return (0);
		}
		i++;
	}
	return (0);
}
