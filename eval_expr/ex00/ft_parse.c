/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 23:18:53 by mvann             #+#    #+#             */
/*   Updated: 2017/08/27 22:37:42 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"
#include "ft_parse.h"
#include <stdlib.h>

char	*ft_parse_number(t_stack *postfix, char *str)
{
	char	*operand;
	int		len;
	int		i;

	len = 0;
	if (*str == '#')
		len++;
	while (str[len] >= '0' && str[len] <= '9')
		len++;
	operand = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	if (*str == '#')
	{
		i++;
		operand[0] = '#';
	}
	while (i < len)
	{
		operand[i] = str[i];
		i++;
	}
	operand[len] = '\0';
	ft_push(postfix, operand);
	return (str + len);
}

char	*ft_parse_geo(t_stack *postfix, t_stack *ops, char *str)
{
	while (*str == '*' || *str == '/' || *str == '%')
	{
		if (ft_stack_size(ops) == 0 || *(char *)ft_peek(ops) == '('
				|| *(char *)ft_peek(ops) == '+' || *(char *)ft_peek(ops) == '-')
			ft_push(ops, str++);
		else
			ft_push(postfix, ft_pop(ops));
	}
	return (str);
}

char	*ft_parse_arith(t_stack *postfix, t_stack *ops, char *str)
{
	while (*str == '+' || *str == '-')
	{
		if (ft_stack_size(ops) == 0 || *(char *)ft_peek(ops) == '(')
			ft_push(ops, str++);
		else
			ft_push(postfix, ft_pop(ops));
	}
	return (str);
}

void	ft_parse_infix(t_stack *postfix, t_stack *ops, char *str)
{
	while (*str)
	{
		if (*str == '#' || (*str >= '0' && *str <= '9'))
			str = ft_parse_number(postfix, str);
		if (*str == '*' || *str == '/' || *str == '%')
			str = ft_parse_geo(postfix, ops, str);
		if (*str == '+' || *str == '-')
			str = ft_parse_arith(postfix, ops, str);
		if (*str == '(')
			ft_push(ops, str++);
		if (*str == ')')
		{
			while (*(char *)ft_peek(ops) != '(')
				ft_push(postfix, ft_pop(ops));
			ft_pop(ops);
			str++;
		}
		if (*str == ' ')
			str++;
	}
	while (*(char *)ft_peek(ops) != 'o')
		ft_push(postfix, ft_pop(ops));
}
