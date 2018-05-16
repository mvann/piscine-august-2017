/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 19:34:41 by mvann             #+#    #+#             */
/*   Updated: 2017/08/22 18:06:07 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_is_op(char *str)
{
	if (str[1])
		return (0);
	return (*str == '+' || *str == '-'
			|| *str == '*' || *str == '/' || *str == '%');
}

int		ft_op_to_i(char *op)
{
	if (*op == '+')
		return (0);
	if (*op == '-')
		return (1);
	if (*op == '*')
		return (2);
	if (*op == '/')
		return (3);
	return (4);
}

int		main(int argc, char **argv)
{
	void	(*ft_ptr[5])(int n1, int n2);

	ft_ptr[0] = &ft_add;
	ft_ptr[1] = &ft_sub;
	ft_ptr[2] = &ft_mul;
	ft_ptr[3] = &ft_div;
	ft_ptr[4] = &ft_mod;
	argc--;
	argv++;
	if (argc == 3)
	{
		if (ft_is_op(argv[1]))
		{
			(*ft_ptr[ft_op_to_i(argv[1])])(ft_atoi(argv[0]), ft_atoi(argv[2]));
		}
		else
		{
			ft_putnbr(0);
		}
		ft_putchar('\n');
	}
	return (0);
}
