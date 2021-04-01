/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_op2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:56:39 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/28 16:12:52 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_deque_swap_front(t_deque *dq)
{
	if (ft_deque_is_empty(dq))
		return ;
	if (dq->front == dq->back)
		return ;
	if (dq->front == dq->size - 1)
		ft_swap(&dq->val[dq->front], &dq->val[0], sizeof(int));
	else
		ft_swap(&dq->val[dq->front], &dq->val[dq->front + 1], sizeof(int));
}

void	ft_deque_push_front(t_deque *dq, int item)
{
	if (ft_deque_is_full(dq))
		return ;
	if (dq->front == -1)
	{
		dq->front = 0;
		dq->back = 0;
	}
	else if (dq->front == 0)
		dq->front = dq->size - 1;
	else
		dq->front = dq->front - 1;
	dq->val[dq->front] = item;
}

void	ft_deque_push_back(t_deque *dq, int item)
{
	if (ft_deque_is_full(dq))
		return ;
	if (dq->front == -1)
	{
		dq->front = 0;
		dq->back = 0;
	}
	else if (dq->back == dq->size - 1)
		dq->back = 0;
	else
		dq->back = dq->back + 1;
	dq->val[dq->back] = item;
}

void	ft_deque_pop_front(t_deque *dq)
{
	if (ft_deque_is_empty(dq))
		return ;
	if (dq->front == dq->back)
	{
		dq->front = -1;
		dq->back = -1;
	}
	else
	{
		if (dq->front == dq->size - 1)
			dq->front = 0;
		else
			dq->front = dq->front + 1;
	}
}

void	ft_deque_pop_back(t_deque *dq)
{
	if (ft_deque_is_empty(dq))
		return ;
	if (dq->front == dq->back)
	{
		dq->front = -1;
		dq->back = -1;
	}
	else if (dq->back == 0)
		dq->back = dq->size - 1;
	else
		dq->back = dq->back - 1;
}
