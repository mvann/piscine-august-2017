/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 15:48:57 by mvann             #+#    #+#             */
/*   Updated: 2017/08/25 16:41:43 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int left;
	int right;

	if (root == 0)
		return (0);
	left = btree_level_count(root->left);
	right = btree_level_count(root->right);
	return (left >= right ? 1 + left : 1 + right);
}
