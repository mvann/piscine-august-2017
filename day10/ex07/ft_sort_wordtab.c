/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 21:50:11 by mvann             #+#    #+#             */
/*   Updated: 2017/08/21 22:56:26 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int correct;

	correct = 1;
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		sorted;
	char	*temp;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 0;
		while (tab[i] && tab[i + 1])
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				sorted = 0;
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
	}
}
