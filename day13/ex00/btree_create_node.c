/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 13:03:53 by mvann             #+#    #+#             */
/*   Updated: 2017/08/25 13:24:54 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *leaf;

	leaf = (t_btree *)malloc(sizeof(t_btree));
	leaf->left = (void *)0;
	leaf->right = (void *)0;
	leaf->item = item;
	return (leaf);
}
