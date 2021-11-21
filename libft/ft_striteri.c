/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:22:49 by auquinta          #+#    #+#             */
/*   Updated: 2021/11/19 13:58:44 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Aplica la función ’f’ a cada caracter del
// string dado como argumento,
// pasando su índice como primer argumento.
// Cada caracter se pasa como una dirección
// a ’f’, por si hace falta modificarlo.
// Retorno: Ninguno
// Como:
// 1) Recorrer string aplicando la funcion f a cada caracter (como direccion)
// poniendo el indice como primer parametro
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
