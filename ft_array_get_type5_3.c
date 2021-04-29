/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_get_type5_3.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 08:06:43 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 02:35:18 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_array_get_type5_3(int a[5], t_cmp *cmp)
{
	if (cmp(&a[0], &a[4]) < 0)
	{
		if (cmp(&a[1], &a[2]) < 0)
		{
			if (cmp(&a[3], &a[1]) < 0)
				return (80);
			if (cmp(&a[2], &a[3]) < 0)
				return (72);
			return (74);
		}
		if (cmp(&a[3], &a[2]) < 0)
			return (86);
		if (cmp(&a[1], &a[3]) < 0)
			return (78);
		return (84);
	}
	return (-1);
}
