/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_get_type5_0.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 07:51:46 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 02:35:04 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_get_type5_3(int a[5], t_cmp *cmp)
{
	if (cmp(&a[0], &a[3]) < 0)
	{
		if (cmp(&a[4], &a[0]) < 0)
			return (47);
		if (cmp(&a[2], &a[4]) < 0)
		{
			if (cmp(&a[1], &a[4]) < 0)
				return (14);
			return (20);
		}
		if (cmp(&a[3], &a[4]) < 0)
			return (22);
		return (23);
	}
	if (cmp(&a[4], &a[3]) < 0)
	{
		if (cmp(&a[0], &a[2]) < 0)
			return (71);
		return (95);
	}
	return (-1);
}

static int	_get_type5_4(int a[5], t_cmp *cmp)
{
	if (cmp(&a[2], &a[4]) < 0)
	{
		if (cmp(&a[0], &a[2]) < 0)
		{
			if (cmp(&a[1], &a[4]) < 0)
				return (38);
			return (44);
		}
		if (cmp(&a[1], &a[4]) < 0)
			return (62);
		if (cmp(&a[0], &a[4]) < 0)
			return (68);
		return (92);
	}
	if (cmp(&a[0], &a[4]) < 0)
	{
		return (46);
		if (cmp(&a[0], &a[2]) < 0)
			return (70);
		return (94);
	}
	if (cmp(&a[0], &a[2]) < 0)
		return (70);
	return (94);
}

int	ft_array_get_type5_0(int a[5], t_cmp *cmp)
{
	int	ret;

	if (cmp(&a[0], &a[1]) < 0)
	{
		ret = ft_array_get_type5_0_0(a, cmp);
		if (ret != -1)
			return (ret);
		ret = ft_array_get_type5_0_1(a, cmp);
		if (ret != -1)
			return (ret);
		ret = ft_array_get_type5_0_2(a, cmp);
		if (ret != -1)
			return (ret);
		ret = _get_type5_3(a, cmp);
		if (ret != -1)
			return (ret);
		return (_get_type5_4(a, cmp));
	}
	return (-1);
}
