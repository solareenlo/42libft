/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_op2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:16:53 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/14 13:17:26 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_array_is_sorted(int *a, size_t size, t_cmp *cmp)
{
	size_t	i;

	i = 0;
	while (i < size - 1)
	{
		if (cmp(&a[i + 1], &a[i]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_array_get_median(int *a, size_t n, t_cmp *cmp)
{
	int	median;
	int	*dup;

	dup = ft_intdup(a, n);
	ft_qsort_int(dup, 0, n - 1, cmp);
	median = dup[(n - 1) / 2];
	free(dup);
	return (median);
}

int	ft_array_get_first_quartile(int *a, size_t n, t_cmp *cmp)
{
	int	res;
	int	*dup;

	dup = ft_intdup(a, n);
	ft_qsort_int(dup, 0, n - 1, cmp);
	res = dup[(n - 1) / 4];
	free(dup);
	return (res);
}
