/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 09:34:01 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/31 09:38:40 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int val, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		c;

	if (n)
	{
		d = dst;
		s = src;
		c = val;
		while (n--)
		{
			*(d++) = *(s++);
			if (*(d - 1) == c)
				return (d);
		}
	}
	return (NULL);
}
