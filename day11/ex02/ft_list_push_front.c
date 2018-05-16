/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 20:09:46 by mvann             #+#    #+#             */
/*   Updated: 2017/08/23 20:29:09 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_ptr;

	new_ptr = ft_create_elem(data);
	if (*begin_list == (void *)0)
		*begin_list = new_ptr;
	else
	{
		new_ptr->next = *begin_list;
		*begin_list = new_ptr;
	}
}
