/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 10:49:32 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/31 10:51:29 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	len;

	if (s == NULL || set == NULL)
		return (NULL);
	while (*s && ft_strchr(set, *s))
		s++;
	len = ft_strlen(s);
	while (len && ft_strchr(set, s[len]))
		len--;
	return (ft_substr(s, 0, len + 1));
}
