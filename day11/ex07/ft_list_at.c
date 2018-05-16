/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 21:43:07 by mvann             #+#    #+#             */
/*   Updated: 2017/08/23 22:34:48 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;

	if (begin_list == 0)
		return ((void*)0);
	i = 0;
	while (i < nbr)
	{
		if (begin_list->next == 0)
			return ((void*)0);
		begin_list = begin_list->next;
		i++;
	}
	return (begin_list);
}
