/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_sort3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:25:52 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/03 07:49:07 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 0 1 2 -> 0
** 0 2 1 -> 1 (rra, sa)
** 1 0 2 -> 2 (sa)
** 1 2 0 -> 3 (rra)
** 2 0 1 -> 4 (ra)
** 2 1 0 -> 5 (ra, sa)
*/

static int	_array_sort3(int *a, t_cmp *cmp)
{
	if (cmp(&a[0], &a[2]) < 0)
	{
		ft_swap(&a[0], &a[1], sizeof(int));
		return (2);
	}
	if (cmp(&a[1], &a[2]) < 0)
	{
		ft_swap(&a[0], &a[1], sizeof(int));
		ft_swap(&a[1], &a[2], sizeof(int));
		return (4);
	}
	ft_swap(&a[0], &a[2], sizeof(int));
	return (5);
}

int	ft_array_sort3(int *a, t_cmp *cmp)
{
	if (cmp(&a[0], &a[1]) < 0)
	{
		if (cmp(&a[1], &a[2]) < 0)
			return (0);
		if (cmp(&a[0], &a[2]) < 0)
		{
			ft_swap(&a[1], &a[2], sizeof(int));
			return (1);
		}
		ft_swap(&a[0], &a[1], sizeof(int));
		ft_swap(&a[0], &a[2], sizeof(int));
		return (3);
	}
	return (_array_sort3(a, cmp));
}
