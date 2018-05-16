/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 22:37:17 by mvann             #+#    #+#             */
/*   Updated: 2017/08/23 23:16:50 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_flip_from_tail(t_list *current, t_list *last, t_list **begin_list)
{
	if (current->next)
		ft_flip_from_tail(current->next, current, begin_list);
	else
		*begin_list = current;
	current->next = last;
}

void	ft_list_reverse(t_list **begin_list)
{
	if (*begin_list)
		if ((*begin_list)->next)
			ft_flip_from_tail(*begin_list, (void*)0, begin_list);
}
