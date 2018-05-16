/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 14:11:18 by mvann             #+#    #+#             */
/*   Updated: 2017/08/25 14:12:22 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		btree_apply_suffix(root->left, applyf);
		btree_apply_suffix(root->right, applyf);
		(*applyf)(root->item);
	}
}
