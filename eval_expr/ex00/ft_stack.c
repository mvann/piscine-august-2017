/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 14:15:08 by mvann             #+#    #+#             */
/*   Updated: 2017/08/26 23:15:07 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stack.h"

t_stack	*ft_create_stack(void *data)
{
	t_stack *out;

	out = (t_stack *)malloc(sizeof(t_stack));
	out->next = (void *)0;
	out->data = data;
	return (out);
}

void	*ft_pop(t_stack *stack)
{
	void *out;

	if (stack->next)
	{
		while (stack->next->next)
			stack = stack->next;
		out = stack->next->data;
		free(stack->next);
		stack->next = (void *)0;
		return (out);
	}
	out = (void *)0;
	return (out);
}

void	ft_push(t_stack *stack, void *data)
{
	while (stack->next)
		stack = stack->next;
	stack->next = ft_create_stack(data);
}

void	*ft_peek(t_stack *stack)
{
	while (stack->next)
		stack = stack->next;
	return (stack->data);
}

int		ft_stack_size(t_stack *stack)
{
	if (stack->next == (void *)0)
		return (0);
	return (1 + ft_stack_size(stack->next));
}
