/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 20:31:12 by mvann             #+#    #+#             */
/*   Updated: 2017/08/22 20:44:07 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				ft_atoi(char *str);

void			ft_add(int n1, int n2);
void			ft_sub(int n1, int n2);
void			ft_mul(int n1, int n2);
void			ft_div(int n1, int n2);
void			ft_mod(int n1, int n2);
void			ft_usage(int n1, int n2);

typedef struct	s_opp
{
	char *opp;
	void (*ft)(int, int);
}				t_opp;

#endif
