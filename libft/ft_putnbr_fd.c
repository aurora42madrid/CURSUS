/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:21:31 by auquinta          #+#    #+#             */
/*   Updated: 2021/11/18 13:49:10 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	valor;
	char	c;

	valor = n;
	if (n < 0)
	{
		valor *= -1;
		write(fd, "-", 1);
	}
	if (valor < 10)
	{
		c = valor + '0';
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd (valor / 10, fd);
		ft_putnbr_fd (valor % 10, fd);
	}
}
