/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_get_type5_0_1.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 09:09:04 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 02:35:08 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_get_type5_0_1(int a[5], t_cmp *cmp)
{
	if (cmp(&a[0], &a[2]) < 0)
	{
		if (cmp(&a[4], &a[0]) < 0)
			return (39);
		if (cmp(&a[2], &a[4]) < 0)
		{
			if (cmp(&a[1], &a[4]) < 0)
				return (7);
			return (13);
		}
		return (15);
	}
	if (cmp(&a[2], &a[4]) < 0)
	{
		if (cmp(&a[0], &a[4]) < 0)
		{
			if (cmp(&a[1], &a[4]) < 0)
				return (31);
			return (37);
		}
		return (61);
	}
	return (63);
}

int	ft_array_get_type5_0_1(int a[5], t_cmp *cmp)
{
	if (cmp(&a[1], &a[3]) < 0)
	{
		if (cmp(&a[3], &a[4]) < 0)
		{
			if (cmp(&a[0], &a[2]) < 0)
				return (6);
			return (30);
		}
		return (_get_type5_0_1(a, cmp));
	}
	return (-1);
}
