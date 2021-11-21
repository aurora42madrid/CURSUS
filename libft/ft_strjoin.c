/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:22:59 by auquinta          #+#    #+#             */
/*   Updated: 2021/11/18 13:50:31 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Crea nuevo string combinando strings, separandolos
// por s1 reservando y liberando memoria (segun man)
// Ejecucion: Crea nuevo string combinando strings ordenados
//reservando memoria (segun 42)
// Retorno: El nuevo string. NULL si falla la reserva
// Como (modo 42):
// 1) Reservamos memoria para el string nuevo que sera la suma de
//todos los parametros +1
// 2) Controlamos el retorno de NULL (por si algún string no existe)
// 3) Copiamos s1 al string nuevo y concatenamos s2

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	buffer = (char *)malloc(sizeof(char) * len);
	if (!buffer)
		return (NULL);
	ft_strlcpy(buffer, s1, len);
	ft_strlcat(buffer, s2, len);
	return (buffer);
}
