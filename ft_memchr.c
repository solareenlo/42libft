/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 10:05:13 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/31 10:07:03 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int val, size_t n)
{
	const unsigned char	*s;
	unsigned char		c;

	s = (const unsigned char *)src;
	c = (unsigned char) val;
	while (n--)
	{
		if (*s == c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
