/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 13:23:41 by mvann             #+#    #+#             */
/*   Updated: 2017/08/16 15:53:36 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_swap(int *a, int *b);

void	ft_putstr(char *str);

int		ft_strlen(char *str);

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	ft_putchar('\n');
	
	char str1[] = "hello  ";

	int a = 5;
	int b = 3;

	ft_putchar(a + '0');
	ft_putchar('\n');
	ft_putchar(b + '0');
	ft_putchar('\n');

	ft_swap(&a, &b);

	ft_putchar(a + '0');
	ft_putchar('\n');
	ft_putchar(b + '0');
	ft_putchar('\n');

	ft_putchar(ft_strlen(str1) + '0');
	ft_putchar('\n');

	return (0);
}
