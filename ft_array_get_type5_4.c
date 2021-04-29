/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_get_type5_4.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 08:08:14 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 02:35:22 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_get_type5_4(int a[5], t_cmp *cmp)
{
	if (cmp(&a[1], &a[4]) < 0)
	{
		if (cmp(&a[3], &a[2]) < 0)
			return (101);
		if (cmp(&a[2], &a[4]) < 0)
			return (97);
		return (99);
	}
	if (cmp(&a[3], &a[1]) < 0)
		return (113);
	if (cmp(&a[2], &a[3]) < 0)
		return (105);
	return (107);
}

int	ft_array_get_type5_4(int a[5], t_cmp *cmp)
{
	if (cmp(&a[1], &a[2]) < 0)
	{
		if (cmp(&a[3], &a[4]) < 0)
		{
			if (cmp(&a[1], &a[3]) < 0)
			{
				if (cmp(&a[2], &a[3]) < 0)
					return (96);
				if (cmp(&a[2], &a[4]) < 0)
					return (98);
				return (100);
			}
			if (cmp(&a[4], &a[1]) < 0)
				return (112);
			if (cmp(&a[2], &a[4]) < 0)
				return (104);
			return (106);
		}
		return (_get_type5_4(a, cmp));
	}
	return (-1);
}
