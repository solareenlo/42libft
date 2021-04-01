/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_op2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 17:29:00 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/28 19:03:49 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_stack_is_full(t_stack *s)
{
	return (s->size == s->back);
}

int	ft_stack_is_empty(t_stack *s)
{
	return (s->back == 0);
}

void	ft_stack_push_back(t_stack *s, int item)
{
	if (ft_stack_is_full(s))
		return ;
	s->val[s->back++] = item;
}

void	ft_stack_pop_back(t_stack *s)
{
	if (ft_stack_is_empty(s))
		return ;
	s->back--;
}

int	ft_stack_get_back(t_stack *s)
{
	if (ft_stack_is_empty(s))
		return (0);
	return (s->val[s->back - 1]);
}
