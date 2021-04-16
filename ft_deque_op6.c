/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_op6.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:43:02 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/16 18:56:57 by tayamamo         ###   ########.fr       */
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
