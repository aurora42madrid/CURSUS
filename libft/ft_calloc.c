/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:02:58 by auquinta          #+#    #+#             */
/*   Updated: 2021/11/18 13:46:10 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Localiza espacios de memoria no usados en
// un array de nelem elementos
// cada uno de los cuales mide elsize bytes. Rellenará el espacio de ceros.
// Retorno: Puntero a la localizacion del espacio. Si nelem o elsize son 0,
// retornara un error de null pointer o un puntero a la localizacion del espacio
// que no permita acceder al objeto. Cualquier otra cosa dara
// error de null pointer
// Como:
// 1) Apuntamos a un espacio de memoria vacio para nelem del tamano elsize
// 2) Gestionamos que nelem o elsize sean 0
// 3) Eliminamos los datos del espacio de memoria apuntado
// 4) Retornamos el puntero

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*mem_aux;

	mem_aux = malloc(nelem * elsize);
	if (!mem_aux)
		return (0);
	ft_bzero(mem_aux, nelem * elsize);
	return (mem_aux);
}
