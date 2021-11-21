/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:16:44 by auquinta          #+#    #+#             */
/*   Updated: 2021/10/08 14:16:44 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Concatena los caracteres de un string src terminado
// en /0 al final de
// un dst también obligatoriamente terminado en /0, y pone /0 al final
// Retorno: La suma de la longitud inicial de dst y src
// Como:
// 1) Sacamos la longitud de src y dst
// 2) Controlamos el retorno nulo por si los strings no existen
// 3) Si el espacio reservado es menor que el string de destino,
// retornamos src y lo reservado
// 4) Nos colocamos en la ultima posicion de dst
// 5) Copiamos src al final de dst
// 6) Retornamos la suma de las dos longitudes iniciales

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (size < len_dst)
		return (len_src + size);
	else
	{
		dst = dst + len_dst;
		ft_strlcpy(dst, src, size - len_dst);
		return (len_dst + len_src);
	}
}
