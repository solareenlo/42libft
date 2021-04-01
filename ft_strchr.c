/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:32:37 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/25 17:32:43 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (*s == c)
		return ((char *)s);
	else
	{
		while (*(s++))
			if (*s == c)
				return ((char *)s);
	}
	return (NULL);
}
