/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_get_type5_5.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 08:09:22 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 02:35:24 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_array_get_type5_5(int a[5], t_cmp *cmp)
{
	if (cmp(&a[2], &a[3]) < 0)
	{
		if (cmp(&a[1], &a[4]) < 0)
		{
			if (cmp(&a[1], &a[3]) < 0)
			{
				if (cmp(&a[3], &a[4]) < 0)
					return (102);
				return (103);
			}
			return (108);
		}
		if (cmp(&a[2], &a[4]) < 0)
		{
			if (cmp(&a[3], &a[4]) < 0)
				return (114);
			if (cmp(&a[1], &a[3]) < 0)
				return (109);
			return (115);
		}
		if (cmp(&a[1], &a[3]) < 0)
			return (111);
		return (117);
	}
	return (-1);
}
