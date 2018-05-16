/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 17:32:01 by mvann             #+#    #+#             */
/*   Updated: 2017/08/16 18:04:21 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

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

int		if_swap(char **argv, int s1_i, int s2_i)
{
	char *temp;

	if (ft_strcmp(argv[s1_i], argv[s2_i]) <= 0)
		return (0);
	else
	{
		temp = argv[s1_i];
		argv[s1_i] = argv[s2_i];
		argv[s2_i] = temp;
		return (1);
	}
}

int		main(int argc, char **argv)
{
	int sorted;
	int i;

	if (argc-- > 1)
	{
		argv++;
		sorted = 0;
		while (!sorted)
		{
			sorted = 1;
			i = -1;
			while (++i + 1 < argc)
			{
				if (if_swap(argv, i, i + 1))
					sorted = 0;
			}
		}
		i = 0;
		while (i < argc)
		{
			ft_putstr(argv[i++]);
			ft_putchar('\n');
		}
	}
	return (0);
}
