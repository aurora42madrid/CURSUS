/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:15:04 by auquinta          #+#    #+#             */
/*   Updated: 2021/10/08 14:15:04 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Duplica un string reservando memoria para el nuevo con malloc
// Retorno: Puntero al string duplicado. Si no hay memoria suficiente, NULL
// Como:
// 1) Calculamos la longitud del string (tamano+1 para el '\0')
// 2) Reservamos memoria para esa longitud
// 3) Si no hay memoria reservada retornamos NULL
// 4) Duplicamos el string y lo cerramos con '\0'
// 5) Devolvemos puntero al string duplicado

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_dup;
	size_t	s_len;
	int		i;

	i = 0;
	s_len = ft_strlen(s);
	s_dup = (char *)malloc(s_len + 1);
	if (!(s_dup))
		return (NULL);
	while (s[i])
	{
		s_dup[i] = s[i];
		i++;
	}
	s_dup[i] = '\0';
	return (s_dup);
}
