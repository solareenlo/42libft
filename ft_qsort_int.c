/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 09:27:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/19 11:17:00 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline int	set_pivot_index(int *a, int lr[2], t_cmp *cmp)
{
	int	index[3];
	int	i;
	int	j;
	int	pivot;

	index[0] = lr[0];
	index[1] = (lr[0] + lr[1]) / 2;
	index[2] = lr[1];
	i = ft_median3_int(a, index, cmp);
	pivot = a[i];
	ft_swap(&a[i], &a[lr[1]], sizeof(int));
	i = lr[0];
	j = lr[0];
	while (j < lr[1])
	{
		if (cmp(&a[j], &pivot) < 0)
			ft_swap(&a[i++], &a[j], sizeof(int));
		j++;
	}
	ft_swap(&a[i], &a[lr[1]], sizeof(int));
	return (i);
}

static inline void	_qsort_int(int *a, int lr[2], t_cmp *cmp, int depth_limit)
{
	int	i;
	int	tmp[2];

	if (depth_limit-- <= 0)
	{
		ft_heapsort(&a[lr[0]], lr[1] - lr[0] + 1, cmp);
		return ;
	}
	if (lr[1] - lr[0] <= 7)
	{
		ft_insertionsort(&a[lr[0]], lr[1] - lr[0] + 1, cmp);
		return ;
	}
	i = set_pivot_index(a, lr, cmp);
	tmp[0] = lr[0];
	tmp[1] = i;
	_qsort_int(a, tmp, cmp, depth_limit);
	tmp[0] = i + 1;
	tmp[1] = lr[1];
	_qsort_int(a, tmp, cmp, depth_limit);
}

void	ft_qsort_int(int *a, int l, int r, t_cmp *cmp)
{
	int	lr[2];

	if (l < 0 || r < 0 || l > r)
		return ;
	lr[0] = l;
	lr[1] = r;
	_qsort_int(a, lr, cmp, 2 * ft_fls(lr[1] - lr[0]) - 1);
	return ;
}
