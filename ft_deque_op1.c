/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_op1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:55:46 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/22 18:28:38 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	_deque_put(t_deque *dq, int i)
{
	while (i < dq->size)
	{
		ft_putnbr_fd(dq->val[i++], 1);
		ft_putchar_fd(' ', 1);
	}
	i = 0;
	while (i <= dq->back)
	{
		ft_putnbr_fd(dq->val[i++], 1);
		ft_putchar_fd(' ', 1);
	}
}

void	ft_deque_put(t_deque *dq)
{
	int	i;

	if (ft_deque_is_empty(dq))
		return ;
	i = dq->front;
	if (dq->front <= dq->back)
	{
		while (i <= dq->back)
		{
			ft_putnbr_fd(dq->val[i++], 1);
			ft_putchar_fd(' ', 1);
		}
	}
	else
		_deque_put(dq, i);
	ft_putchar_fd('\n', 1);
}

void	ft_deque_free(t_deque *dq)
{
	if (dq == NULL)
		return ;
	if (dq->val)
		free(dq->val);
	free(dq);
}

t_deque	*ft_deque_init(int n)
{
	t_deque	*dq;

	dq = ft_calloc(1, sizeof(t_deque));
	if (dq == NULL)
		return (NULL);
	dq->val = ft_calloc(n, sizeof(int));
	if (dq->val == NULL)
	{
		free(dq);
		return (NULL);
	}
	dq->front = -1;
	dq->back = 0;
	dq->size = n;
	return (dq);
}

void	ft_deque_clear(t_deque *dq)
{
	while (!ft_deque_is_empty(dq))
		ft_deque_pop_front(dq);
}
