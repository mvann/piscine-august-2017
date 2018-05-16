/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 23:10:05 by mvann             #+#    #+#             */
/*   Updated: 2017/08/17 23:13:50 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	my_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_print_words_tables(char **tab)
{
	while (*tab)
	{
		my_putstr(*tab++);
		ft_putchar('\n');
	}
}
