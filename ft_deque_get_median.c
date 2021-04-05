/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_get_median.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:29:54 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/06 03:37:00 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	_set_array(t_deque *dq, int *array)
{
	int	i;
	int	j;

	i = 0;
	while (i < dq->size - dq->front)
	{
		array[i] = dq->val[dq->front + i];
		i++;
	}
	j = 0;
	while (j <= dq->back)
	{
		array[i + j] = dq->val[j];
		j++;
	}
}

int	ft_deque_get_median(t_deque *dq, int size, t_cmp *cmp)
{
	int	median;
	int	*array;

	array = malloc(sizeof(int) * ft_deque_get_size(dq, dq->front, dq->back));
	if (array == NULL)
		return (0);
	size = ft_min(size, ft_deque_get_size(dq, dq->front, dq->back));
	if (dq->front <= dq->back)
		ft_memmove(array, &dq->val[dq->front], sizeof(int) * size);
	else
		_set_array(dq, array);
	median = ft_array_get_median(array, size, cmp);
	free(array);
	return (median);
}
