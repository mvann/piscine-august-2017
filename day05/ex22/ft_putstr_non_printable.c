/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 22:47:09 by mvann             #+#    #+#             */
/*   Updated: 2017/08/15 23:07:29 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putchar_non_printable(char c)
{
	char *base_hex;

	base_hex = "0123456789abcdef";
	ft_putchar('\\');
	if (c == 127)
	{
		ft_putchar('7');
		ft_putchar('f');
	}
	else
	{
		ft_putchar(base_hex[c / 16]);
		ft_putchar(base_hex[c % 16]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < ' ' || *str == 127)
		{
			ft_putchar_non_printable(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
