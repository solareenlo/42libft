/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 10:55:41 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/31 11:19:44 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	_free(char **s, size_t size)
{
	while (size--)
		free(*s++);
	free(s);
	return ;
}

static	size_t	str_len(char const *s, char c)
{
	size_t	len;

	while (*s == c)
		s++;
	len = 0;
	while (*s != c && *s)
	{
		s++;
		len++;
	}
	return (len);
}

static	size_t	cnt_word(char const *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
			cnt++;
		while (*s != c && *s)
			s++;
	}
	return (cnt);
}

void	str_cpy(char *dst, const char **src, const char c)
{
	char	*d;

	d = dst;
	while (**src == c)
		(*src)++;
	while (**src != c && **src)
		*(d++) = *((*src)++);
	*d = '\0';
}

char	**ft_split(char const *s, char c)
{
	char		**res;
	char		**front;
	size_t		cnt;
	size_t		i;

	res = malloc(sizeof(char *) * (cnt_word(s, c) + 1));
	if (res == NULL || !s)
		return (NULL);
	cnt = cnt_word(s, c);
	front = res;
	i = -1;
	while (++i < cnt)
	{
		*res = malloc(sizeof(char) * (str_len(s, c) + 1));
		if (*res == NULL)
		{
			_free(res, i);
			return (NULL);
		}
		str_cpy(*res, &s, c);
		res++;
	}
	*res = NULL;
	return (front);
}
