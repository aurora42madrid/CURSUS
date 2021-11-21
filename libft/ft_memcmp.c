/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:07:35 by auquinta          #+#    #+#             */
/*   Updated: 2021/10/08 14:07:35 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Compara los n primeros bytes (unsigned char) de
// dos areas de memoria
// Retorno: Devuelve 0 si s1==s2, negativo si s1<s2 y positivo si s1>s2.
// 	Si n es 0 retorna 0
// Como:
// 1) Recorremos los strings comparando posiciones mientras sean distintos
// 2) Retornamos el resultado de restar el segundo al primero
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		else
			i++;
	}
	return (0);
}
