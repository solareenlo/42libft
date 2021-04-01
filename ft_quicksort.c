/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:37:16 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/14 22:32:19 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline int	median3(int *a, int l, int m, int r)
{
	if (a[l] - a[m] < 0)
	{
		if (a[m] - a[r] < 0)
			return (m);
		if (a[l] - a[r] < 0)
			return (r);
		return (l);
	}
	if (a[m] - a[r] > 0)
		return (m);
	if (a[l] - a[r] < 0)
		return (l);
	return (r);
}

static inline int	partition(int *a, int l, int r)
{
	int	i;
	int	j;
	int	p;
	int	m;

	m = median3(a, l, (l + r) / 2, r);
	ft_swap(&a[m], &a[r], sizeof(int));
	p = a[r];
	i = l - 1;
	j = l;
	while (j <= r - 1)
	{
		if (a[j] <= p)
			ft_swap(&a[++i], &a[j], sizeof(int));
		j++;
	}
	ft_swap(&a[i + 1], &a[r], sizeof(int));
	return (i + 1);
}

void	ft_quicksort(void *base, int l, int r)
{
	int	p;

	if (l < r)
	{
		p = partition(base, l, r);
		ft_quicksort(base, l, p - 1);
		ft_quicksort(base, p + 1, r);
	}
}
