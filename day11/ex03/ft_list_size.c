/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 20:31:54 by mvann             #+#    #+#             */
/*   Updated: 2017/08/23 20:42:21 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	if (begin_list == 0)
		return (0);
	if (begin_list->next == 0)
		return (1);
	return (1 + ft_list_size(begin_list->next));
}
