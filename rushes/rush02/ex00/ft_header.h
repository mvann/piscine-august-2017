/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eito-fis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 19:36:42 by eito-fis          #+#    #+#             */
/*   Updated: 2017/08/27 20:49:18 by eito-fis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# define TL(a,c) (a == 0  && str[a] == c)
# define TR(a,c,h) (str[a + 1] == '\n' && h == 0 && str[a] == c)
# define BL(a,c,h) (str[a - 1] == '\n' && h == ft_gh(str) && str[a] == c)
# define BR(a,c,h) (str[a + 1] == '\n' && h == ft_gh(str) && str[a] == c)
# define TOP(a,w,x,h) (TL(a, w) || TR(a, x, h))
# define BOT(a,y,z,h) (BL(a, y, h) || BR(a, z, h))
# define CKCHAR(w,x,y,z,a,h) (TOP(a, w, x, h) || BOT(a, y, z, h))

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int i);
int		ft_gh(char *str);
int		ft_test_rush00(char *str, int last_true);
int		ft_test_rush01(char *str, int last_true);
int		ft_test_rush02(char *str, int last_true);
int		ft_test_rush03(char *str, int last_true);
int		ft_test_rush04(char *str, int last_true);

#endif
