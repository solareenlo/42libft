/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 14:55:21 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/08 14:57:34 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char		*lastd;
	const char	*lasts;

	d = dst;
	s = src;
	if (d == NULL && s == NULL)
		return (dst);
	if (d < s)
		while (n--)
			*(d++) = *(s++);
	else
	{
		lasts = s + (n - 1);
		lastd = d + (n - 1);
		while (n--)
			*(lastd--) = *(lasts--);
	}
	return (dst);
}
