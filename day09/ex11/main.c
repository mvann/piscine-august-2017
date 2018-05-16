/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 16:07:26 by mvann             #+#    #+#             */
/*   Updated: 2017/08/18 16:18:49 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_perso.h"

int main()
{
	t_perso donnie;

	donnie.name = strdup("Donnie");
	donnie.life = 100.0;
	donnie.age = 24;
	donnie.profession = SAVE_AUSTIN_POWERS;
	(void)donnie;
	return (0);
}
