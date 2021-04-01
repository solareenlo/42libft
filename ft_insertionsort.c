/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertionsort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:09:09 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/17 23:25:40 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_insertionsort(int *a, size_t n, t_cmp *cmp)
{
	size_t	i;
	size_t	j;
	int		v;

	i = 0;
	while (i < n)
	{
		v = a[i];
		j = i;
		while (j > 0)
		{
			if (cmp(&a[j - 1], &v) > 0)
				a[j] = a[j - 1];
			else
				break ;
			j--;
		}
		a[j] = v;
		i++;
	}
}
