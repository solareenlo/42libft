/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 10:12:04 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/31 10:16:45 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dlen)
{
	size_t	slen;

	if (!dst || !src)
		return (0);
	slen = ft_strlen(src);
	if (slen + 1 < dlen)
		ft_memcpy(dst, src, slen + 1);
	else if (dlen != 0)
	{
		ft_memcpy(dst, src, dlen - 1);
		dst[dlen - 1] = '\0';
	}
	return (slen);
}
