/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:26:03 by auquinta          #+#    #+#             */
/*   Updated: 2021/10/08 14:26:03 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Busca un caracter en un string
// Retorno: Un puntero a la posición en que ese caracter aparece por ultima vez
// Como:
// 1) Conseguimos la longitud del string
// 2) Gestionamos error si string no existe
// 2) Recorremos el string desde el final y paramos cuando encontremos c
// 3) Retornamos la posicion

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	while (s_len >= 0)
	{
		if (s[s_len] == (char)c)
			return ((char *)&s[s_len]);
		s_len--;
	}
	return (NULL);
}
