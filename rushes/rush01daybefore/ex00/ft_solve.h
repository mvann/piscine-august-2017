/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 19:53:43 by mvann             #+#    #+#             */
/*   Updated: 2017/08/20 19:53:44 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SOLVE_H
# define FT_SOLVE_H

int		ft_check_move(int **board, int line, int x, int nb);
int		ft_next_line(int **board, int line, int x, int **static_board);
int		ft_next_x(int **board, int line, int x, int **static_board);

#endif
