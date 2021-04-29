/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_get_type5_0_0.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 08:54:43 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 02:35:06 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_get_type5_0_0_0(int a[5], t_cmp *cmp)
{
	if (cmp(&a[2], &a[4]) < 0)
	{
		if (cmp(&a[1], &a[3]) < 0)
			return (2);
		if (cmp(&a[0], &a[3]) < 0)
			return (8);
		return (32);
	}
	if (cmp(&a[1], &a[4]) < 0)
	{
		if (cmp(&a[4], &a[3]) < 0)
			return (5);
		if (cmp(&a[3], &a[0]) < 0)
			return (34);
		if (cmp(&a[1], &a[3]) < 0)
			return (4);
		return (10);
	}
	return (-1);
}

static int	_get_type5_0_0_1(int a[5], t_cmp *cmp)
{
	if (cmp(&a[0], &a[4]) < 0)
	{
		if (cmp(&a[3], &a[0]) < 0)
			return (40);
		if (cmp(&a[1], &a[3]) < 0)
			return (11);
		if (cmp(&a[3], &a[4]) < 0)
			return (16);
		return (17);
	}
	if (cmp(&a[3], &a[4]) < 0)
		return (64);
	if (cmp(&a[3], &a[0]) < 0)
		return (65);
	if (cmp(&a[1], &a[3]) < 0)
		return (35);
	return (41);
}

int	ft_array_get_type5_0_0(int a[5], t_cmp *cmp)
{
	int	ret;

	if (cmp(&a[1], &a[2]) < 0)
	{
		if (cmp(&a[2], &a[3]) < 0)
		{
			if (cmp(&a[3], &a[4]) < 0)
				return (0);
			if (cmp(&a[2], &a[4]) < 0)
				return (1);
			if (cmp(&a[1], &a[4]) < 0)
				return (3);
			if (cmp(&a[0], &a[4]) < 0)
				return (9);
			return (33);
		}
		ret = _get_type5_0_0_0(a, cmp);
		if (ret != -1)
			return (ret);
		return (_get_type5_0_0_1(a, cmp));
	}
	return (-1);
}
