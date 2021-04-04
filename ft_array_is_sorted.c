/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_is_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 11:04:13 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/04 11:04:26 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_array_is_sorted(int *a, size_t size, t_cmp *cmp)
{
	size_t	i;

	i = 0;
	while (i < size - 1)
	{
		if (cmp(&a[i + 1], &a[i]) < 0)
			return (0);
		i++;
	}
	return (1);
}
