/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ffsll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 05:59:40 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/21 22:40:30 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Find First Set bit
*/

int	ft_ffsll(long long mask)
{
	int	bit;

	if (mask == 0)
		return (0);
	bit = 1;
	while (!(mask & 1))
	{
		mask = (unsigned long long) mask >> 1;
		bit++;
	}
	return (bit);
}
