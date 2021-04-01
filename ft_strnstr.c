/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 10:35:37 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/31 10:39:53 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t n)
{
	size_t	flen;

	if (*find == '\0')
		return ((char *)s);
	flen = ft_strlen(find);
	if (n < 1 || *s == '\0' || n < flen)
		return (NULL);
	while (ft_strncmp(s, find, flen) != 0)
	{
		s++;
		n--;
		if (n < 1 || *s == '\0' || n < flen)
			return (NULL);
	}
	return ((char *)s);
}
