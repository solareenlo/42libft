/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ffsl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 05:58:33 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/21 22:37:21 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Find First Set bit
*/

int	ft_ffsl(long mask)
{
	int	bit;

	if (mask == 0)
		return (0);
	bit = 1;
	while (!(mask & 1))
	{
		mask = (unsigned long) mask >> 1;
		bit++;
	}
	return (bit);
}
