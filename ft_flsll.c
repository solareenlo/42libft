/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flsll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 06:03:25 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/21 22:39:18 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Find Last Set bit
*/

int	ft_flsll(long long mask)
{
	int	bit;

	if (mask == 0)
		return (0);
	bit = 1;
	while (mask != 1)
	{
		mask = (unsigned long long) mask >> 1;
		bit++;
	}
	return (bit);
}
