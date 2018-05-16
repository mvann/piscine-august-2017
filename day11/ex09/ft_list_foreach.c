/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 23:21:47 by mvann             #+#    #+#             */
/*   Updated: 2017/08/23 23:44:30 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if (begin_list)
	{
		if (begin_list->next)
			ft_list_foreach(begin_list->next, f);
		(*f)(begin_list->data);
	}
}
