/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heapsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 18:59:25 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/17 07:15:57 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline void	heapify(int *a, int i, int n, t_cmp *cmp)
{
	int	child1;

	child1 = i * 2 + 1;
	if (child1 >= n)
		return ;
	if (child1 + 1 < n && cmp(&a[child1 + 1], &a[child1]) > 0)
		child1++;
	if (cmp(&a[child1], &a[i]) <= 0)
		return ;
	ft_swap(&a[i], &a[child1], sizeof(int));
	heapify(a, child1, n, cmp);
}

void	ft_heapsort(int *a, size_t n, t_cmp *cmp)
{
	int	i;

	i = n / 2;
	while (i >= 0)
		heapify(a, i--, n, cmp);
	i = n - 1;
	while (i > 0)
	{
		ft_swap(&a[0], &a[i], sizeof(int));
		heapify(a, 0, i, cmp);
		i--;
	}
}
