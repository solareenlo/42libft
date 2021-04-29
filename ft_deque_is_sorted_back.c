/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_is_sorted_back.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 04:50:36 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/22 05:17:35 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_deque_is_sorted(t_deque *dq, int *size, int i, t_cmp *cmp)
{
	while (--(*size) && i > 0)
	{
		if (cmp(&dq->val[i], &dq->val[i - 1]) < 0)
			return (0);
		i--;
	}
	if (*size == 0)
		return (1);
	if (cmp(&dq->val[dq->size - 1], &dq->val[i]) < 0)
		return (0);
	i = 0;
	while (--(*size) && i > dq->front)
	{
		if (cmp(&dq->val[i], &dq->val[i - 1]) < 0)
			return (0);
		i--;
	}
	return (1);
}

int	ft_deque_is_sorted_back(t_deque *dq, int size, t_cmp *cmp)
{
	int	i;

	if (ft_deque_is_empty(dq) || size == 0)
		return (0);
	if (ft_deque_is_one(dq) || size == 1)
		return (0);
	i = dq->back;
	if (dq->front < dq->back)
	{
		while (--size && i > dq->front)
		{
			if (cmp(&dq->val[i], &dq->val[i - 1]) < 0)
				return (0);
			i--;
		}
	}
	else if (_deque_is_sorted(dq, &size, i, cmp) == 0)
		return (0);
	if (size == 0)
		return (1);
	else
		return (0);
}
