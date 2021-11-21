/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:25:06 by auquinta          #+#    #+#             */
/*   Updated: 2021/11/18 13:50:54 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Aplica la función ’f’ a cada caracter de la string ’s’ para
// crear la nueva string, resultado de aplicar
// sucesivas veces ’f’ (utilizando malloc(3))
// Retorno: El string resultante de aplicar sucesivas veces ’f’ a cada caracter.
// NULL si falla la reserva.
// Como:
// 1) Averiguar tamano de string y reservar memoria para nuevo string
// 2) Controlamos el retorno de NULL (por si algún string no existe)
// 3) Recorrer string aplicando la funcion f a cada caracter y
// almacenandolo en el string final
// 4) Poner el nulo al final del string final y darlo como resultado

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	size_t			s_len;

	if (!s || !f)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * s_len + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
