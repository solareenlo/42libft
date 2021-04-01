/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_sort3_front.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 10:52:28 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/30 11:57:10 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 0 1 2 -> 0
** 0 2 1 -> 1 (rra, sa)
** 1 0 2 -> 2 (sa)
** 1 2 0 -> 3 (rra)
** 2 0 1 -> 4 (ra)
** 2 1 0 -> 5 (ra, sa)
*/

int	ft_deque_sort3_front(t_deque *dq, t_cmp *cmp)
{
	int	*a[3];

	if (ft_deque_is_empty(dq) || ft_deque_get_size(dq, dq->front, dq->back) < 3)
		return (0);
	if (dq->front == dq->size - 1)
	{
		a[0] = &dq->val[dq->front];
		a[1] = &dq->val[0];
		a[2] = &dq->val[1];
	}
	else if (dq->front == dq->size - 2)
	{
		a[0] = &dq->val[dq->front];
		a[1] = &dq->val[dq->front + 1];
		a[2] = &dq->val[0];
	}
	else
	{
		a[0] = &dq->val[dq->front];
		a[1] = &dq->val[dq->front + 1];
		a[2] = &dq->val[dq->front + 2];
	}
	return (ft_array_sort3(*a, cmp));
}
