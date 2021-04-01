/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ffs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 05:43:46 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/17 05:45:11 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Find First Set bit
*/

int	ft_ffs(int mask)
{
	int	bit;

	if (mask == 0)
		return (0);
	bit = 1;
	while (!(mask & 1))
	{
		mask = (unsigned int) mask >> 1;
		bit++;
	}
	return (bit);
}
