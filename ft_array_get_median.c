/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_get_median.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 10:00:56 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/03 10:01:13 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
