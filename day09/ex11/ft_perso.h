/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 16:07:12 by mvann             #+#    #+#             */
/*   Updated: 2017/08/18 16:33:55 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SAVE_AUSTIN_POWERS "hello"
#include <string.h>
#include <stdlib.h>

typedef struct t_perso t_perso;

struct t_perso {
	char	*name;
	int		life;
	int		age;
	char	*profession;
};
