/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_op1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 17:12:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/28 19:32:45 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_stack_put(t_stack *s)
{
	size_t	i;

	i = 0;
	while (i < s->back)
	{
		ft_putnbr_fd(s->val[i++], 1);
		ft_putchar_fd(' ', 1);
	}
	ft_putchar_fd('\n', 1);
}

void	ft_stack_free(t_stack *s)
{
	if (s == NULL)
		return ;
	if (s->val)
		free(s->val);
	free(s);
}

t_stack	*ft_stack_init(size_t n)
{
	t_stack	*new;

	new = ft_calloc(1, sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->val = ft_calloc(n, sizeof(int));
	if (new->val == NULL)
	{
		free(new);
		return (NULL);
	}
	new->back = 0;
	new->size = n;
	return (new);
}
