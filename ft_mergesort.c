/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mergesort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 04:15:56 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/17 06:56:04 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	merge(int *a, int *buf, int l, int r)
{
	int	index_left;
	int	index_right;
	int	i;

	index_left = 0;
	index_right = r - l - 1;
	i = l;
	while (i < r)
	{
		if (buf[index_left] <= buf[index_right])
			a[i] = buf[index_left++];
		else
			a[i] = buf[index_right--];
		i++;
	}
}

void	ft_mergesort(int *a, int l, int r)
{
	int	m;
	int	*buf;
	int	i;
	int	j;

	if (r - l == 1)
		return ;
	m = l + (r - l) / 2;
	ft_mergesort(a, l, m);
	ft_mergesort(a, m, r);
	buf = malloc((r - l) * sizeof(int));
	if (buf == NULL)
		return ;
	i = l;
	j = 0;
	while (i < m)
		buf[j++] = a[i++];
	i = r - 1;
	while (m <= i)
		buf[j++] = a[i--];
	merge(a, buf, l, r);
	free(buf);
}
