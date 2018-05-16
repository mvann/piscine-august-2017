/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 22:09:02 by mvann             #+#    #+#             */
/*   Updated: 2017/08/25 13:29:31 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "ft_btree.h"

void	put_level(int level)
{
	int i = 1;

	while (i <= level)
	{
		printf("\t");
		i++;
	}
}

void	print_btree(t_btree *head, int level)
{
	if (head)
	{
		if (head->item)
		{
			put_level(level);
			printf("Item: %s\n", head->item);
		}
		else
		{
			put_level(level);
			printf("No Data:\n");
		}
		print_btree(head->left, level + 1);
		print_btree(head->right, level + 1);
		//else
		//	printf("End of List");
	}
	else
	{
		put_level(level);
		printf("This is a null pointer.\n");
	}
}

int		main()
{
	t_btree *tree;
	tree = btree_create_node("hello");
	tree->left = btree_create_node("wasgudd");
	tree->right = btree_create_node("right##");
	tree->right->right = btree_create_node("ah sup");
	print_btree(tree, 0);
}
