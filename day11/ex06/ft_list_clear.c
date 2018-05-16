/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 21:22:51 by mvann             #+#    #+#             */
/*   Updated: 2017/08/23 21:37:59 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_free(t_list *head)
{
	if (head->next)
		ft_free(head->next);
	free(head);
}

void	ft_list_clear(t_list **begin_list)
{
	if (*begin_list)
	{
		ft_free(*begin_list);
		*begin_list = (void*)0;
	}
}
