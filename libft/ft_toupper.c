/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:26:51 by auquinta          #+#    #+#             */
/*   Updated: 2021/10/08 14:26:51 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Convierte de minuscula a mayuscula
// Retorno: La letra cambiada, o c si no es posible
// Como:
// 1) Sacamos la longitud de src y dst
// 2) Comprobamos que src existe y que en destino tenemos
// suficiente espacio para cerrar con el caracter nulo
// 3) Añadimos el contenido de src al final de dst
// 4) Ponemos el valor nulo al final
// 5) Retornamos la longitud de src

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}
