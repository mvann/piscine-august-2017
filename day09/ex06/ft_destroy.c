/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 00:19:31 by mvann             #+#    #+#             */
/*   Updated: 2017/08/18 00:30:35 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ultimate.h>
#include <stdlib.h>

void	ft_destroy(char ***factory)
{
	while (factory)
	{
		while (*factory)
		{
			while (**factory)
			{
				free(**factory++);
			}
			free(*factory++);
		}
		free(factory++);
	}
}
