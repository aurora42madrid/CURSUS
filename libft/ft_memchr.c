/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:07:31 by auquinta          #+#    #+#             */
/*   Updated: 2021/11/18 13:47:44 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Busca c en los n primeros bytes iniciales de s.
// Todos unsigned char.
// Retorno: Puntero al byte correspondiente a c o NULL
// Como:
// 1) Recorremos la cadena retornando el puntero siempre que encuentre c
// hasta haber corrido las n posiciones
// el ultimo return tiene que ser nulo para que compile

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((unsigned char *)s);
		s++;
		n--;
	}
	return (NULL);
}
