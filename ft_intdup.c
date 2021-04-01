/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 21:26:07 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/24 15:47:27 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_intdup(int *a, size_t n)
{
	int		*copy;

	copy = malloc(sizeof(int) * n);
	if (copy == NULL)
		return (NULL);
	ft_memmove(copy, a, n * sizeof(int));
	return (copy);
}
