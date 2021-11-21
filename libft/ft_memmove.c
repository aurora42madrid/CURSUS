/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:10:56 by auquinta          #+#    #+#             */
/*   Updated: 2021/10/08 14:10:56 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Copia n bytes del area de memoria src a dest,
// pudiendo superponerse
// Retorno: Un puntero a dest
// Como:
// 1) Usamos punteros auxiliares de origen y destino
// 2) Si alguna cadena no existe retornamos NULL
// 3) Recorremos la cadena y asignamos cada posicion de
// la auxiliar origen a la auxiliar destino
// Diferenciamos si hay espacio suficiente para colocar el
// origen en el destino o no.
// La gracia es que con memmove puede haber overlap de memoria,
// pero con memcpy no.
// 4) Retornamos dest

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst_aux;
	char	*src_aux;

	dst_aux = (char *)dest;
	src_aux = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (dst_aux > src_aux)
	{
		while (n--)
			dst_aux[n] = src_aux[n];
	}
	else if (dst_aux < src_aux)
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
