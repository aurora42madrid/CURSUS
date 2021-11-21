/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:08:32 by auquinta          #+#    #+#             */
/*   Updated: 2021/10/08 14:08:32 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Copia n bytes del area de memoria src a dest, sin superponerse
// Retorno: Un puntero a dest
// Como:
// 1) Usamos punteros auxiliares de origen y destino
// 2) Si alguna cadena no existe retornamos NULL
// 3) Recorremos la cadena y asignamos cada posicion de la
// auxiliar origen a la auxiliar destino
// 4) Retornamos dest

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		((char *) dest)[i] = ((char *) src)[i];
		i++;
	}
	return (dest);
}
