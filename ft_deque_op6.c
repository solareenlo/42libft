/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_op6.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:43:02 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/22 18:29:39 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_deque_copy(t_deque *dst, const t_deque *src)
{
	ft_memmove(dst->val, src->val, sizeof(int) * src->size);
	dst->front = src->front;
	dst->back = src->back;
	dst->size = src->size;
}

static void	_copy_front(t_deque *dst, t_deque *src, int size)
{
	int		i;
	int		x;

	i = 0;
	while (i < size)
	{
		x = ft_deque_get_front(src);
		ft_deque_pop_front(src);
		ft_deque_push_back(dst, x);
		i++;
	}
}

static void	_copy_back(t_deque *dst, t_deque *src, int *a, int size)
{
	int		i;
	int		x;

	i = 0;
	while (i < size)
	{
		x = ft_deque_get_back(src);
		ft_deque_pop_back(src);
		a[size - 1 - i] = x;
		i++;
	}
	i = 0;
	while (i < size)
	{
		ft_deque_push_back(dst, a[i]);
		i++;
	}
}

void	ft_deque_copy_front_back(t_deque *dst, t_deque *src,
		int front_size, int back_size)
{
	int		*a;
	t_deque	*tmp;

	tmp = ft_deque_init(src->size);
	ft_deque_copy(tmp, src);
	ft_deque_clear(dst);
	_copy_front(dst, tmp, front_size);
	a = ft_calloc(back_size, sizeof(int));
	if (a == NULL)
	{
		ft_deque_free(tmp);
		return ;
	}
	_copy_back(dst, tmp, a, back_size);
	ft_deque_free(tmp);
	free(a);
}
