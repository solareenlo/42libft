/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_endl_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:26:55 by tayamamo          #+#    #+#             */
/*   Updated: 2021/03/08 17:28:02 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_endl_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	ft_putnbr_fd(n, fd);
	ft_putchar_fd('\n', fd);
}
