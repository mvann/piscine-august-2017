/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 22:09:02 by mvann             #+#    #+#             */
/*   Updated: 2017/08/23 20:45:53 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	print_list(t_list *head)
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

t_list	*ft_create_elem(void *data)
{
	t_list *out;

	out = (t_list*)malloc(sizeof(t_list));
	out->data = data;
	out->next = 0;
	return (out);
}

int		main()
{
	t_list *list = ft_create_elem("yo");
	list->next = ft_create_elem("great");
	list->next->next = ft_create_elem("ur boi");
	print_list(list);
	printf("\nNum: %d", ft_list_size(list));
}
