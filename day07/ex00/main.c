/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 21:45:26 by mvann             #+#    #+#             */
/*   Updated: 2017/08/17 13:25:37 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

void	ft_putchar(char c);

char	*ft_strdup(char *src);

int		main(void)
{
	char str1[] = "hello";
	char *str2;
	ft_putstr(str1);
	ft_putchar('\n');
	str2 = ft_strdup(str1);
	ft_putstr(str1);
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putchar('\n');	
	return (0);
}
