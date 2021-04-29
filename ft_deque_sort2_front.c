/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_sort2_front.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 09:01:01 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/14 05:35:45 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 0 1 -> 0
** 1 0 -> 1 (sa)
*/

int	ft_deque_sort2_front(t_deque *dq, t_cmp *cmp)
{
	if (ft_deque_is_empty(dq) || ft_deque_is_one(dq))
		return (0);
	if (dq->front == dq->size - 1 )
	{
		if (cmp(&dq->val[dq->front], &dq->val[0]) > 0)
		{
			ft_swap(&dq->val[dq->front], &dq->val[0], sizeof(int));
			return (1);
		}
		return (0);
	}
	return (ft_array_sort2(&dq->val[dq->front], cmp));
}
