/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_get_type5_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 08:04:45 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 02:35:15 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_get_type5_2(int a[5], t_cmp *cmp)
{
	if (cmp(&a[4], &a[2]) < 0)
		return (87);
	if (cmp(&a[0], &a[4]) < 0)
	{
		if (cmp(&a[3], &a[4]) < 0)
			return (54);
		return (55);
	}
	if (cmp(&a[1], &a[4]) < 0)
		return (79);
	return (85);
}

int	ft_array_get_type5_2(int a[5], t_cmp *cmp)
{
	if (cmp(&a[0], &a[3]) < 0)
	{
		if (cmp(&a[1], &a[2]) < 0)
		{
			if (cmp(&a[4], &a[1]) < 0)
				return (81);
			if (cmp(&a[0], &a[4]) < 0)
			{
				if (cmp(&a[3], &a[4]) < 0)
					return (48);
				return (49);
			}
			if (cmp(&a[2], &a[4]) < 0)
				return (73);
			return (75);
		}
		return (_get_type5_2(a, cmp));
	}
	return (-1);
}
