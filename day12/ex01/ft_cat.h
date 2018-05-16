/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 17:49:21 by mvann             #+#    #+#             */
/*   Updated: 2017/08/24 19:42:49 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# define BUF_SIZE 30000

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

#endif
