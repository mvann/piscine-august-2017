/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 22:09:02 by mvann             #+#    #+#             */
/*   Updated: 2017/08/23 20:18:26 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
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

int		main()
{
	printf("first\n");
	t_list *list = (void *)0;
	
	printf("reached.");
	ft_list_push_back(&list, "sup");
	ft_list_push_back(&list, "howsit");
	print_list(list);
}
