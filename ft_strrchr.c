/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 10:33:06 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/31 10:34:32 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (s[len] == c)
		return ((char *)&s[len]);
	else
	{
		while (len--)
			if (s[len] == c)
				return ((char *)&s[len]);
	}
	return (NULL);
}
