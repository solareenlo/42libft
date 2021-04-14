/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_get_first_quartile.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 10:17:04 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/14 13:06:25 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
