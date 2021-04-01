/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_sort4.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 20:50:15 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/25 11:32:58 by tayamamo         ###   ########.fr       */
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

int	_array_sort4_3(int *a, t_cmp *cmp)
{
	if (cmp(&a[1], &a[3]) < 0)
	{
		ft_swap(&a[1], &a[2], sizeof(int));
		ft_swap(&a[0], &a[1], sizeof(int));
		return (8);
	}
	if (cmp(&a[0], &a[3]) < 0)
	{
		ft_swap(&a[1], &a[3], sizeof(int));
		ft_swap(&a[1], &a[2], sizeof(int));
		ft_swap(&a[0], &a[1], sizeof(int));
		return (10);
	}
	if (cmp(&a[2], &a[3]) < 0)
	{
		ft_swap(&a[0], &a[2], sizeof(int));
		ft_swap(&a[1], &a[3], sizeof(int));
		return (16);
	}
	ft_swap(&a[1], &a[2], sizeof(int));
	ft_swap(&a[0], &a[3], sizeof(int));
	ft_swap(&a[2], &a[3], sizeof(int));
	return (17);
}

int	_array_sort4_2(int *a, t_cmp *cmp)
{
	if (cmp(&a[1], &a[3]) < 0)
	{
		ft_swap(&a[1], &a[2], sizeof(int));
		return (3);
	}
	if (cmp(&a[2], &a[3]) < 0)
	{
		ft_swap(&a[1], &a[3], sizeof(int));
		ft_swap(&a[1], &a[2], sizeof(int));
		return (2);
	}
	if (cmp(&a[0], &a[3]) < 0)
	{
		ft_swap(&a[1], &a[3], sizeof(int));
		return (5);
	}
	ft_swap(&a[1], &a[3], sizeof(int));
	ft_swap(&a[0], &a[1], sizeof(int));
	return (11);
}

int	_array_sort4_1(int *a, t_cmp *cmp)
{
	if (cmp(&a[2], &a[3]) < 0)
		return (0);
	if (cmp(&a[1], &a[3]) < 0)
	{
		ft_swap(&a[2], &a[3], sizeof(int));
		return (1);
	}
	if (cmp(&a[0], &a[3]) < 0)
	{
		ft_swap(&a[1], &a[3], sizeof(int));
		ft_swap(&a[2], &a[3], sizeof(int));
		return (4);
	}
	ft_swap(&a[2], &a[3], sizeof(int));
	ft_swap(&a[1], &a[2], sizeof(int));
	ft_swap(&a[0], &a[1], sizeof(int));
	return (9);
}

int	ft_array_sort4(int *a, t_cmp *cmp)
{
	if (cmp(&a[0], &a[1]) < 0)
	{
		if (cmp(&a[1], &a[2]) < 0)
			return (_array_sort4_1(a, cmp));
		if (cmp(&a[0], &a[2]) < 0)
			return (_array_sort4_2(a, cmp));
		return (_array_sort4_3(a, cmp));
	}
	if (cmp(&a[0], &a[2]) < 0)
		return (ft_array_sort4_4(a, cmp));
	if (cmp(&a[1], &a[2]) < 0)
		return (ft_array_sort4_5(a, cmp));
	return (ft_array_sort4_6(a, cmp));
}
