/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_get_type5_1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 08:02:20 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 02:35:13 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_get_type5_2(int a[5], t_cmp *cmp)
{
	if (cmp(&a[0], &a[3]) < 0)
	{
		if (cmp(&a[3], &a[4]) < 0)
		{
			if (cmp(&a[2], &a[4]) < 0)
				return (26);
			return (28);
		}
		if (cmp(&a[0], &a[4]) < 0)
			return (29);
		return (53);
	}
	if (cmp(&a[0], &a[4]) < 0)
	{
		if (cmp(&a[2], &a[4]) < 0)
			return (50);
		return (52);
	}
	if (cmp(&a[3], &a[4]) < 0)
		return (76);
	return (77);
}

static int	_get_type5_1(int a[5], t_cmp *cmp)
{
	if (cmp(&a[4], &a[1]) < 0)
	{
		if (cmp(&a[3], &a[4]) < 0)
			return (88);
		if (cmp(&a[3], &a[1]) < 0)
			return (89);
		if (cmp(&a[0], &a[3]) < 0)
			return (59);
		return (83);
	}
	if (cmp(&a[3], &a[1]) < 0)
	{
		if (cmp(&a[4], &a[0]) < 0)
			return (82);
		if (cmp(&a[2], &a[4]) < 0)
			return (56);
		return (58);
	}
	return (-1);
}

int	ft_array_get_type5_1(int a[5], t_cmp *cmp)
{
	int	ret;

	if (cmp(&a[0], &a[2]) < 0)
	{
		if (cmp(&a[2], &a[3]) < 0)
		{
			if (cmp(&a[4], &a[1]) < 0)
				return (57);
			if (cmp(&a[3], &a[4]) < 0)
				return (24);
			if (cmp(&a[2], &a[4]) < 0)
				return (25);
			if (cmp(&a[0], &a[4]) < 0)
				return (27);
			return (51);
		}
		ret = _get_type5_1(a, cmp);
		if (ret != -1)
			return (ret);
		return (_get_type5_2(a, cmp));
	}
	return (-1);
}
