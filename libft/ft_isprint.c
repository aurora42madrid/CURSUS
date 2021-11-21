/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:05:11 by auquinta          #+#    #+#             */
/*   Updated: 2021/10/08 14:05:11 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Busca un caracter imprimible incluido el espacio
// Retorno: !=0 si lo encuentra, y 0 si no lo encuentra
#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
