/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:21:04 by auquinta          #+#    #+#             */
/*   Updated: 2021/11/18 13:48:51 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Escribe el string ’s’ en el file descriptor indicado,
// seguido de un salto de línea
// Retorno: Ninguno

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, (ft_strlen(s)));
		write(fd, "\n", 1);
	}
}
