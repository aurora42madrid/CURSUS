/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:24:22 by auquinta          #+#    #+#             */
/*   Updated: 2021/10/08 14:24:22 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Compara los n primeros caracteres de dos strings
// Retorno: Devuelve 0 si s1==s2, negativo si s1<s2 y positivo si s1>s2
// Como:
// 1) Recorremos los strings comparando posiciones mientras sean iguales

// 2) Retornamos el resultado de restar el segundo al primero
// (convertir a unsigned char para que no de problemas con
// caracteres especiales)
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n != 0)
	{
		while ((i <= n) && (s1[i] == s2[i]) && (s1[i] || s2[i]))
		{
			i++;
		}
		if (i == n)
			i--;
		return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
	}
	else
		return (0);
}
