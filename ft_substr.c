/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 10:44:04 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/31 10:47:34 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	char	*res;

	if (!s)
		return (NULL);
	if (len < 1 || start >= ft_strlen(s))
		return (ft_strdup(""));
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	res = cpy;
	while (start--)
		s++;
	while (len-- && *s != '\0')
		*cpy++ = *s++;
	*cpy = '\0';
	return (res);
}
