/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:24:43 by auquinta          #+#    #+#             */
/*   Updated: 2021/10/08 14:24:43 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Localiza en big len caracteres de little, o hasta llegar a un '\0'
// Retorno: Puntero a primer caracter de little en big.
// Si little no esta, NULL. Si little esta vacio big.
// Como:
// 1) Corremos ft_strlen pra asegurar que si no hay posiciones de segfault
// 2) Si little vacio devolvemos big
// 3) Recorremos comparando big y little. Cuando coincidan
// retornamos el puntero de big

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	int		aux;

	little_len = ft_strlen(little);
	ft_strlen(big);
	if (!*little)
		return ((char *)big);
	while (*big && little_len <= len)
	{
		aux = ft_strncmp(big, little, little_len);
		if (aux == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
