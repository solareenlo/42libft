/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 10:19:41 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/31 10:32:02 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;
	char	*d;
	int		i;

	d = dst;
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (size <= dlen)
		return (size + slen);
	i = 0;
	while (src[i] != '\0' && dlen + 1 < size)
	{
		dst[dlen] = src[i];
		i++;
		dlen++;
	}
	dst[dlen] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
