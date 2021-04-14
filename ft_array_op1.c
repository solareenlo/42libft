/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_op1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 19:52:17 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/14 13:16:33 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_array_init(t_array *a, size_t size)
{
	a->array = malloc(size * sizeof(int));
	if (a->array == NULL)
		return (0);
	a->used = 0;
	a->size = size;
	return (1);
}

int	ft_array_insert(t_array *a, int element)
{
	int	*new;

	if (a->used == a->size)
	{
		new = malloc(a->size * 2 * sizeof(int));
		if (new == NULL)
			return (0);
		ft_memmove(new, a->array, a->size * sizeof(int));
		free(a->array);
		a->array = new;
	}
	a->array[a->used++] = element;
	return (1);
}

void	ft_array_free(t_array *a)
{
	free(a->array);
	a->array = NULL;
	a->used = 0;
	a->size = 0;
}
