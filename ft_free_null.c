/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_null.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:43:45 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/25 17:43:52 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_null(char **ptr)
{
	size_t	len;
	char	*p;

	if (!ptr)
		return ;
	if (*ptr)
	{
		len = ft_strlen(*ptr);
		p = *ptr;
		while (len--)
			*(p++) = '\0';
		free(*ptr);
		*ptr = NULL;
	}
	return ;
}
