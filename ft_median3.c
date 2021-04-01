/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_median3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:49:51 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/24 18:52:54 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_median3(char *a, char *b, char *c, t_cmp *cmp)
{
	if (cmp(a, b) < 0)
	{
		if (cmp(b, c) < 0)
			return (b);
		if (cmp(a, c) < 0)
			return (c);
		return (a);
	}
	if (cmp(a, c) < 0)
		return (a);
	if (cmp(b, c) > 0)
		return (b);
	return (c);
}
