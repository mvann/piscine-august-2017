/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 21:00:38 by mvann             #+#    #+#             */
/*   Updated: 2017/08/23 21:33:17 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *list;

	if (ac > 1)
	{
		list = ft_create_elem(av[ac - 1]);
		list->next = ft_list_push_params(--ac, av);
		return (list);
	}
	else
	{
		(void)av;
		list = (void*)0;
		return (list);
	}
}
