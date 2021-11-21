/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:18:28 by auquinta          #+#    #+#             */
/*   Updated: 2021/10/08 14:18:28 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Copia los caracteres de un string src terminado en /0 (size -1)
// a un dst y pone /0 al final
// Retorno: La longitud total del string creado (será la de src)
// Como:
// 1) Sacamos la longitud de src recorriendo la cadena
// 2) Recorremos de nuevo src y asignamos todos sus valores a dst
// 3) Ponemos el valor nulo al final
// 4) Retornamos la longitud de src

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	j;

	src_len = ft_strlen(src);
	j = 0;
	if (size > 0)
	{
		while (src[j] && j < (size - 1))
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (src_len);
}
