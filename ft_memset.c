/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 14:44:48 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/08 14:47:35 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int val, size_t n)
{
	unsigned char	*p;
	unsigned char	c;

	p = dst;
	c = val;
	while (n--)
		*(p++) = c;
	return (dst);
}
