/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evaluate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 23:20:23 by mvann             #+#    #+#             */
/*   Updated: 2017/08/27 22:58:52 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evaluate.h"
#include "ft_stack.h"
#include "ft_str.h"

int		ft_evaluate(t_stack *post, char *s)
{
	int right;
	int left;

	if (*s == '#' || (*s >= '0' && *s <= '9'))
		return (ft_atoi(s));
	right = ft_evaluate(post, ft_pop(post));
	left = ft_evaluate(post, ft_pop(post));
	if (*s == '+')
		return (left + right);
	if (*s == '-')
		return (left - right);
	if (*s == '*')
		return (left * right);
	if (*s == '/')
		return (left / right);
	return (left % right);
}
