/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_get_type5_0_2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 09:12:50 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 02:35:11 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_get_type5_0_2_0(int a[5], t_cmp *cmp)
{
	if (cmp(&a[4], &a[2]) < 0)
	{
		if (cmp(&a[0], &a[2]) < 0)
		{
			if (cmp(&a[0], &a[4]) < 0)
				return (21);
			return (45);
		}
		if (cmp(&a[0], &a[3]) < 0)
			return (69);
		return (93);
	}
	if (cmp(&a[0], &a[2]) < 0)
	{
		if (cmp(&a[3], &a[4]) < 0)
		{
			if (cmp(&a[1], &a[4]) < 0)
				return (12);
			return (18);
		}
		return (19);
	}
	return (-1);
}

static int	_get_type5_0_2_1(int a[5], t_cmp *cmp)
{
	if (cmp(&a[3], &a[4]) < 0)
	{
		if (cmp(&a[0], &a[3]) < 0)
		{
			if (cmp(&a[1], &a[4]) < 0)
				return (36);
			return (42);
		}
		if (cmp(&a[1], &a[4]) < 0)
			return (60);
		if (cmp(&a[0], &a[4]) < 0)
			return (66);
		return (90);
	}
	if (cmp(&a[0], &a[4]) < 0)
		return (43);
	if (cmp(&a[0], &a[3]) < 0)
		return (67);
	return (91);
}

int	ft_array_get_type5_0_2(int a[5], t_cmp *cmp)
{
	int	ret;

	if (cmp(&a[2], &a[3]) < 0)
	{
		ret = _get_type5_0_2_0(a, cmp);
		if (ret != -1)
			return (ret);
		return (_get_type5_0_2_1(a, cmp));
	}
	return (-1);
}
