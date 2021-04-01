/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fls.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 05:41:16 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/17 05:46:08 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Find Last Set bit
*/

int	ft_fls(int mask)
{
	int	bit;

	if (mask == 0)
		return (0);
	bit = 1;
	while (mask != 1)
	{
		mask = (unsigned int) mask >> 1;
		bit++;
	}
	return (bit);
}
