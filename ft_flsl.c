/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flsl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 06:02:12 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/21 22:38:48 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Find Last Set bit
*/

int	ft_flsl(long mask)
{
	int	bit;

	if (mask == 0)
		return (0);
	bit = 1;
	while (mask != 1)
	{
		mask = (unsigned long) mask >> 1;
		bit++;
	}
	return (bit);
}
