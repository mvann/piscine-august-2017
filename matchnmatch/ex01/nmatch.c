/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 20:34:07 by mvann             #+#    #+#             */
/*   Updated: 2017/08/21 16:52:28 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		nmatch(char *s1, char *s2)
{
	ft_putchar(*s1);
	ft_putchar(',');
	ft_putchar(*s2);
	ft_putchar('\n');
	if (!*s1 && !*s2)
	{
		ft_putchar('X');
		ft_putchar('\n');
		return (1);
	}
	else if (*s1 == *s2 && *s1 != '*')
		return (nmatch(s1 + 1, s2 + 1));
	else if (*s1 == *s2)
		return (nmatch(s1 + 1, s2));
	else if (*s2 == '*' && !*s1)
		return (nmatch(s1, s2 + 1));
	else if (*s2 == '*')
		return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
	else
		return (0);
}
