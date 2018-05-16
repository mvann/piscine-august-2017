/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 22:09:02 by mvann             #+#    #+#             */
/*   Updated: 2017/08/23 21:13:04 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	print_list(t_list *head)
{
	if (head)
	{
		if (head->data)
			printf("Data: %s\n", head->data);
		else
			printf("No Data\n");
		if (head->next)
			print_list(head->next);
		else
			printf("End of List");
		}
	else
		printf("\nThis is a null pointer.\n");
}

t_list	*ft_create_elem(void *data)
{
	t_list *out;

	out = (t_list*)malloc(sizeof(t_list));
	out->data = data;
	out->next = 0;
	return (out);
}

int		main(int argc, char **argv)
{
	t_list *list = ft_list_push_params(argc, argv); 
	print_list(list);
}
