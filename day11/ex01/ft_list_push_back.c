/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 22:05:09 by mvann             #+#    #+#             */
/*   Updated: 2017/08/23 20:05:47 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	if (*begin_list == (void *)0)
		*begin_list = ft_create_elem(data);
	else
	{
		while ((*begin_list)->next)
			*begin_list = (*begin_list)->next;
		(*begin_list)->next = ft_create_elem(data);
	}
}
