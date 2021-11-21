/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:29:18 by auquinta          #+#    #+#             */
/*   Updated: 2021/11/18 13:51:25 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Crea nuevo string eliminando los caracteres set
// de principio y final reservando memoria
// Retorno: El nuevo string. NULL si falla la reserva
// Como:
// 1) Controlamos el retorno de NULL (por si algún string o
// caracteres a cortar no existen)
// 2) Centramos posicion inicial y posicion final de s1
// 3) Creamos una auxiliar para saber cuándo los strings son iguales
// 4) Recorremos s1 desde el principio buscando set
// (mientras exista la posición de s1 y
// exista un puntero al caracter set), y avanzamos la posicion
// inicial para copiar
// 5) Recorremos s1 desde el final (mientras haya algo en la
// ultima posicion, exista un puntero
// a set en esa posicion y no nos hayamos pasando comparando desde el principio)
// 6) Reservamos memoria para el string final (trozo que queda
// entre inicio y fin + nulo)
// 7) Si no falla la memoria,copiamos al nuevo string
// el contenido restante de s1

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	pos_ini;
	size_t	pos_fin;
	char	*substr;

	substr = NULL;
	if (!s1 || !set)
		return (NULL);
	pos_ini = 0;
	pos_fin = ft_strlen(s1);
	if (s1 != 0 && set != 0)
	{
		while (s1[pos_ini] && ft_strchr(set, s1[pos_ini]))
			pos_ini++;
		while (s1[pos_fin - 1] && ft_strchr(set, s1[pos_fin - 1])
			&& pos_fin > pos_ini)
			pos_fin--;
		substr = (char *)malloc(sizeof(char) * (pos_fin - pos_ini + 1));
		if (substr)
			ft_strlcpy(substr, &s1[pos_ini], pos_fin - pos_ini + 1);
	}
	return (substr);
}
