/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 14:58:18 by mvann             #+#    #+#             */
/*   Updated: 2017/08/27 23:16:14 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"
#include "ft_str.h"
#include "ft_parse.h"
#include "ft_evaluate.h"

void	ft_put_stack(t_stack *stack)
{
	if (stack)
	{
		ft_putstr(stack->data);
		ft_putstr("\n");
		ft_put_stack(stack->next);
	}
}

void	ft_change_negatives(char *str)
{
	int maybe_neg;

	maybe_neg = 1;
	while (*str)
	{
		if (*str == ' ')
			str++;
		else if (*str == '-' && maybe_neg)
			*(str++) = '#';
		else if ((*str >= '0' && *str <= '9') || *str == ')')
		{
			maybe_neg = 0;
			str++;
		}
		else
		{
			maybe_neg = 1;
			str++;
		}
	}
}

int		eval_expr(char *str)
{
	t_stack *postfix;
	t_stack *ops;

	if (*str == '\0')
		return (0);
	postfix = ft_create_stack("postfix");
	ops = ft_create_stack("ops");
	ft_change_negatives(str);
	ft_parse_infix(postfix, ops, str);
	return (ft_evaluate(postfix, ft_pop(postfix)));
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
