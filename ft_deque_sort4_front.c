/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_sort4_front.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:41:45 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/30 12:00:11 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 0 1 2 3 -> 0
** 0 1 3 2 -> 1
** 0 3 1 2 -> 2
** 3 0 1 2 -> 18
** 0 2 1 3 -> 3
** 0 2 3 1 -> 4
** 0 3 2 1 -> 5
** 3 0 2 1 -> 19
** 2 0 1 3 -> 12
** 2 0 3 1 -> 13
** 2 3 0 1 -> 16
** 3 2 0 1 -> 22
** 1 0 2 3 -> 6
** 1 0 3 2 -> 7
** 1 3 0 2 -> 10
** 3 1 0 2 -> 20
** 1 2 0 3 -> 8
** 1 2 3 0 -> 9
** 1 3 2 0 -> 11
** 3 1 2 0 -> 21
** 2 1 0 3 -> 14
** 2 1 3 0 -> 15
** 2 3 1 0 -> 17
** 3 2 1 0 -> 23
*/

static void	_front_is_size_1(t_deque *dq, int *a[4])
{
	a[0] = &dq->val[dq->front];
	a[1] = &dq->val[0];
	a[2] = &dq->val[1];
	a[3] = &dq->val[2];
}

static void	_front_is_size_2(t_deque *dq, int *a[4])
{
	a[0] = &dq->val[dq->front];
	a[1] = &dq->val[dq->front + 1];
	a[2] = &dq->val[0];
	a[3] = &dq->val[1];
}

int	ft_deque_sort4_front(t_deque *dq, t_cmp *cmp)
{
	int	*a[4];

	if (ft_deque_is_empty(dq) || ft_deque_get_size(dq, dq->front, dq->back) < 4)
		return (0);
	if (dq->front == dq->size - 1)
		_front_is_size_1(dq, a);
	else if (dq->front == dq->size - 2)
		_front_is_size_2(dq, a);
	else if (dq->front == dq->size - 3)
	{
		a[0] = &dq->val[dq->front];
		a[1] = &dq->val[dq->front + 1];
		a[2] = &dq->val[dq->front + 2];
		a[3] = &dq->val[0];
	}
	else
	{
		a[0] = &dq->val[dq->front];
		a[1] = &dq->val[dq->front + 1];
		a[2] = &dq->val[dq->front + 2];
		a[3] = &dq->val[dq->front + 3];
	}
	return (ft_array_sort4(*a, cmp));
}
