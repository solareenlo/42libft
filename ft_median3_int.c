/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_median3_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 23:54:44 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/18 09:36:38 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_median3_int(int *a, int index[3], t_cmp *cmp)
{
	if (cmp(&a[index[0]], &a[index[1]]) < 0)
	{
		if (cmp(&a[index[1]], &a[index[2]]) < 0)
			return (index[1]);
		if (cmp(&a[index[0]], &a[index[2]]) < 0)
			return (index[2]);
		return (index[0]);
	}
	if (cmp(&a[index[1]], &a[index[2]]) > 0)
		return (index[1]);
	if (cmp(&a[index[0]], &a[index[2]]) < 0)
		return (index[0]);
	return (index[2]);
}
