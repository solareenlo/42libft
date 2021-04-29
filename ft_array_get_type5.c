/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_get_type5.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 07:49:03 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 02:35:01 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_get_type5_6(int a[5], t_cmp *cmp)
{
	if (cmp(&a[2], &a[4]) < 0)
	{
		if (cmp(&a[1], &a[4]) < 0)
			return (110);
		return (116);
	}
	if (cmp(&a[3], &a[4]) < 0)
		return (118);
	return (119);
}

static int	_get_type5(int a[5], t_cmp *cmp)
{
	int	ret;

	ret = ft_array_get_type5_2(a, cmp);
	if (ret == -1)
	{
		ret = ft_array_get_type5_3(a, cmp);
		if (ret == -1)
		{
			ret = ft_array_get_type5_4(a, cmp);
			if (ret == -1)
			{
				ret = ft_array_get_type5_5(a, cmp);
				if (ret == -1)
					return (_get_type5_6(a, cmp));
			}
		}
	}
	return (ret);
}

int	ft_array_get_type5(int a[5], t_cmp *cmp)
{
	int	ret;

	ret = ft_array_get_type5_0(a, cmp);
	if (ret == -1)
	{
		ret = ft_array_get_type5_1(a, cmp);
		if (ret == -1)
			ret = _get_type5(a, cmp);
	}
	return (ret);
}
