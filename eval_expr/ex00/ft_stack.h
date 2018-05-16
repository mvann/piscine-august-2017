/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 14:08:35 by mvann             #+#    #+#             */
/*   Updated: 2017/08/26 16:08:10 by mvann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

typedef struct		s_stack
{
	struct s_stack	*next;
	void			*data;
}					t_stack;

t_stack				*ft_create_stack(void *data);
void				*ft_pop(t_stack *stack);
void				ft_push(t_stack *stack, void *data);
void				*ft_peek(t_stack *stack);
void				ft_delete_stack(t_stack *stack);
int					ft_stack_size(t_stack *stack);

#endif
