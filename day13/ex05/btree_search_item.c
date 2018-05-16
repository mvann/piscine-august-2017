/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 15:25:55 by mvann             #+#    #+#             */
/*   Updated: 2017/08/25 15:50:26 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (root == 0)
		return ((void *)0);
	if ((*cmpf)(data_ref, root->item) == 0)
		return (root);
	if (btree_search_item(root->left, data_ref, cmpf))
		return (btree_search_item(root->left, data_ref, cmpf));
	return (btree_search_item(root->right, data_ref, cmpf));
}
