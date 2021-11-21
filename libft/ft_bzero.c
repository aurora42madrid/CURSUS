/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:01:09 by auquinta          #+#    #+#             */
/*   Updated: 2021/10/08 14:01:09 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Elimina los datos de n bytes del area de memoria apuntada por s
// escribiendo ceros '\0'
// Retorno: Ninguno
// Como:
// 1) Usamos un puntero auxiliar a unsigned char y le asignamos el valor de s
// 2) Recorremos la cadena con un contador entre 0 y n posiciones
// 3) Asignamos a cada posicion el valor 0
// 4) Retornamos s

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr [i] = 0;
		i++;
	}
	return (s);
}
