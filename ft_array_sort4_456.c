/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_sort4_456.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:32:01 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/25 11:32:36 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 0 1 2 3 -> 0
** 0 1 3 2 -> 1
** 0 3 1 2 -> 2
** 3 0 1 2 -> 18
** 0 2 1 3 -> 3
** 0 2 3 1 -> 4
** 0 3 2 1 -> 5
** 3 0 2 1 -> 19
** 2 0 1 3 -> 12
** 2 0 3 1 -> 13
** 2 3 0 1 -> 16
** 3 2 0 1 -> 22
** 1 0 2 3 -> 6
** 1 0 3 2 -> 7
** 1 3 0 2 -> 10
** 3 1 0 2 -> 20
** 1 2 0 3 -> 8
** 1 2 3 0 -> 9
** 1 3 2 0 -> 11
** 3 1 2 0 -> 21
** 2 1 0 3 -> 14
** 2 1 3 0 -> 15
** 2 3 1 0 -> 17
** 3 2 1 0 -> 23
*/

int	ft_array_sort4_6(int *a, t_cmp *cmp)
{
	if (cmp(&a[0], &a[3]) < 0)
	{
		ft_swap(&a[0], &a[2], sizeof(int));
		return (14);
	}
	if (cmp(&a[1], &a[3]) < 0)
	{
		ft_swap(&a[0], &a[3], sizeof(int));
		ft_swap(&a[0], &a[2], sizeof(int));
		return (20);
	}
	if (cmp(&a[2], &a[3]) < 0)
	{
		ft_swap(&a[0], &a[3], sizeof(int));
		ft_swap(&a[1], &a[2], sizeof(int));
		ft_swap(&a[0], &a[1], sizeof(int));
		return (22);
	}
	ft_swap(&a[0], &a[3], sizeof(int));
	ft_swap(&a[1], &a[2], sizeof(int));
	return (23);
}

int	ft_array_sort4_5(int *a, t_cmp *cmp)
{
	if (cmp(&a[0], &a[3]) < 0)
	{
		ft_swap(&a[0], &a[1], sizeof(int));
		ft_swap(&a[1], &a[2], sizeof(int));
		return (12);
	}
	if (cmp(&a[2], &a[3]) < 0)
	{
		ft_swap(&a[0], &a[1], sizeof(int));
		ft_swap(&a[1], &a[2], sizeof(int));
		ft_swap(&a[2], &a[3], sizeof(int));
		return (18);
	}
	if (cmp(&a[1], &a[3]) < 0)
	{
		ft_swap(&a[0], &a[1], sizeof(int));
		ft_swap(&a[1], &a[3], sizeof(int));
		return (19);
	}
	ft_swap(&a[0], &a[3], sizeof(int));
	return (21);
}

int	ft_array_sort4_4(int *a, t_cmp *cmp)
{
	if (cmp(&a[2], &a[3]) < 0)
	{
		ft_swap(&a[0], &a[1], sizeof(int));
		return (6);
	}
	if (cmp(&a[0], &a[3]) < 0)
	{
		ft_swap(&a[0], &a[1], sizeof(int));
		ft_swap(&a[2], &a[3], sizeof(int));
		return (7);
	}
	if (cmp(&a[1], &a[3]) < 0)
	{
		ft_swap(&a[0], &a[1], sizeof(int));
		ft_swap(&a[1], &a[3], sizeof(int));
		ft_swap(&a[2], &a[3], sizeof(int));
		return (13);
	}
	ft_swap(&a[2], &a[3], sizeof(int));
	ft_swap(&a[0], &a[2], sizeof(int));
	return (15);
}
