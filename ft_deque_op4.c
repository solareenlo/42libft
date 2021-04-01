/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_op4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:01:08 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/30 09:16:19 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_deque_is_full(t_deque *dq)
{
	return ((dq->front == 0 && dq->back == dq->size - 1)
		|| dq->front == dq->back + 1);
}

int	ft_deque_is_one(t_deque *dq)
{
	return (dq->front == dq->back);
}

int	ft_deque_is_empty(t_deque *dq)
{
	return (dq->front == -1);
}

static int	_deque_is_sorted(t_deque *dq, int i, t_cmp *cmp)
{
	while (i < dq->size - 1)
	{
		if (cmp(&dq->val[i + 1], &dq->val[i]) < 0)
			return (0);
		i++;
	}
	if (cmp(&dq->val[0], &dq->val[i]) < 0)
		return (0);
	i = 0;
	while (i < dq->back)
	{
		if (cmp(&dq->val[i + 1], &dq->val[i]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_deque_is_sorted(t_deque *dq, t_cmp *cmp)
{
	int	i;

	if (ft_deque_is_empty(dq))
		return (0);
	if (ft_deque_is_one(dq))
		return (1);
	i = dq->front;
	if (dq->front < dq->back)
	{
		while (i < dq->back)
		{
			if (cmp(&dq->val[i + 1], &dq->val[i]) < 0)
				return (0);
			i++;
		}
	}
	else if (_deque_is_sorted(dq, i, cmp) == 0)
		return (0);
	return (1);
}
