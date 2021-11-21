/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:01:00 by auquinta          #+#    #+#             */
/*   Updated: 2021/10/08 14:01:00 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Convierte el string apuntado por nptr a int
// Retorno: El valor convertido, o 0 si da error
// Como:
// 1) Recorremos el string ignorando los espacios que pueda haber al principio
// 2) Si hay un - cambiamos el signo. Solo una vez,
// los demás signos detienen la lectura
// 3) Recorremos de nuevo pasando a int los numeros del string
// 4) Retornamos el resultado con su signo

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	n;

	i = 0;
	sign = 1;
	n = 0;
	while ((nptr[i] > 8 && nptr[i] < 14) || (nptr[i] == 32))
		i++;
	if ((nptr[i] == '+') || (nptr[i] == '-'))
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && n < 2147483648)
	{
		n = n * 10 + (int)nptr[i] - '0';
		i++;
	}
	if (n > 2147483647 && sign > 0)
		return (-1);
	if (n > 2147483648 && sign < 0)
		return (0);
	return ((int)(n * sign));
}
