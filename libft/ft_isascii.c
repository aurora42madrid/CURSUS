/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:04:49 by auquinta          #+#    #+#             */
/*   Updated: 2021/10/08 14:04:49 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Busca un caracter (unsigned char) de la tabla ASCII
// Retorno: !=0 si lo encuentra, y 0 si no lo encuentra
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
