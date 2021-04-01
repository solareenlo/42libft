/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 03:28:36 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/18 21:54:49 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_quicksort2(int *a, int l, int r, t_cmp *cmp)
{
	int	i;
	int	p;
	int	j;
	int	index[3];

	if (r - l <= 0)
		return ;
	index[0] = l;
	index[1] = (l + r) / 2;
	index[2] = r;
	i = ft_median3_int(a, index, cmp);
	p = a[i];
	ft_swap(&a[i], &a[r], sizeof(int));
	i = l;
	j = l;
	while (j < r)
	{
		if (cmp(&a[j], &p) < 0)
			ft_swap(&a[i++], &a[j], sizeof(int));
		j++;
	}
	ft_swap(&a[i], &a[r], sizeof(int));
	ft_quicksort2(a, l, i, cmp);
	ft_quicksort2(a, i + 1, r, cmp);
}
