/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:29:27 by auquinta          #+#    #+#             */
/*   Updated: 2021/11/21 13:37:18 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Genera un substring partiendo de un original s,
// empezando en start y durante len posciciones
// Retorno: El nuevo string. NULL si falla la reserva de memoria.
// Como:
// 1) Reservamos memoria para el string nuevo de tamano len +1 para el '\0'
// 2) Controlamos el retorno de NULL (algún string no existe)
// y los substrings vacios
// 3) Recorremos el string original entre start y len asignando
// los valores al nuevo string
// 4) Ponemos el '\0' al final del string nuevo

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;
	size_t	max_memory;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	max_memory = ft_strlen(s);
	if (max_memory > len)
		max_memory = len;
	sub_s = malloc(sizeof(char) * max_memory + 1);
	i = 0;
	if (!sub_s)
		return (NULL);
	while (s[(size_t)start + i] != '\0' && i < len)
	{
		sub_s[i] = s[(size_t)start + i];
		i++;
	}
	sub_s[i] = '\0';
	return (sub_s);
}
