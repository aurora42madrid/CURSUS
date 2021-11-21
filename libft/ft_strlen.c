/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:23:55 by auquinta          #+#    #+#             */
/*   Updated: 2021/10/08 14:23:55 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Calcula la longitud de una cadena
// Retorno: El numero de bytes que hay en la cadena a la que apunta s
// Como:
// 1) Recorremos la cadena con un contador
// 2) Devolvemos el numero de posiciones recorridas por el contador

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
