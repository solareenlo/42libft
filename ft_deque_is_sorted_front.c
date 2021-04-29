/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_is_sorted_front.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 02:48:39 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/20 03:14:40 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_deque_is_sorted(t_deque *dq, int *size, int i, t_cmp *cmp)
{
	while (--(*size) && i < dq->size - 1)
	{
		if (cmp(&dq->val[i + 1], &dq->val[i]) < 0)
			return (0);
		i++;
	}
	if (*size == 0)
		return (1);
	if (cmp(&dq->val[0], &dq->val[i]) < 0)
		return (0);
	i = 0;
	while (--(*size) && i < dq->back)
	{
		if (cmp(&dq->val[i + 1], &dq->val[i]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_deque_is_sorted_front(t_deque *dq, int size, t_cmp *cmp)
{
	int	i;

	if (ft_deque_is_empty(dq) || size == 0)
		return (0);
	if (ft_deque_is_one(dq) || size == 1)
		return (0);
	i = dq->front;
	if (dq->front < dq->back)
	{
		while (--size && i < dq->back - dq->front)
		{
			if (cmp(&dq->val[i + 1], &dq->val[i]) < 0)
				return (0);
			i++;
		}
	}
	else if (_deque_is_sorted(dq, &size, i, cmp) == 0)
		return (0);
	if (size == 0)
		return (1);
	else
		return (0);
}
