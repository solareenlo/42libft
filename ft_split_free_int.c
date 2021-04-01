/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_free_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 07:59:34 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/09 08:13:51 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_split_free_int(int **ptr, size_t n)
{
	size_t	i;

	if (!ptr)
		return ;
	i = 0;
	while (i < n)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return ;
}
