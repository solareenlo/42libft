/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_op3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:23:20 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/22 05:44:55 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_deque_get_front(t_deque *dq)
{
	if (ft_deque_is_empty(dq))
		return (-1);
	return (dq->val[dq->front]);
}

int	ft_deque_get_front_second(t_deque *dq)
{
	int	size;

	size = ft_deque_get_size(dq, dq->front, dq->back);
	if (size < 2)
		return (-1);
	if (dq->front == dq->size - 1)
		return (dq->val[0]);
	else
		return (dq->val[dq->front + 1]);
}

int	ft_deque_get_front_third(t_deque *dq)
{
	int	size;

	size = ft_deque_get_size(dq, dq->front, dq->back);
	if (size < 3)
		return (-1);
	if (dq->front == dq->size - 1)
		return (dq->val[1]);
	else if (dq->front == dq->size - 2)
		return (dq->val[0]);
	else
		return (dq->val[dq->front + 2]);
}

int	ft_deque_get_back(t_deque *dq)
{
	if (ft_deque_is_empty(dq) || dq->back < 0)
		return (-1);
	return (dq->val[dq->back]);
}

int	ft_deque_get_size(t_deque *dq, int start, int end)
{
	if (ft_deque_is_empty(dq)
		|| start > dq->size - 1 || start < 0 || end > dq->size - 1 || end < 0)
		return (0);
	if (dq->front <= dq->back)
	{
		if (dq->front <= start && end <= dq->back && start <= end)
			return (end - start + 1);
		return (0);
	}
	if (dq->front <= start && dq->size - 1 <= start
		&& dq->front <= end && dq->size - 1 <= end && start <= end)
		return (end - start + 1);
	if (0 <= start && start <= dq->back && 0 <= end && end <= dq->back
		&& start <= end)
		return (end - start + 1);
	if (dq->front <= start && start <= dq->size - 1
		&& 0 <= end && end <= dq->back)
		return (dq->size - start + end + 1);
	return (0);
}
