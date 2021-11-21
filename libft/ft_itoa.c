/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:16:26 by auquinta          #+#    #+#             */
/*   Updated: 2021/11/18 13:47:33 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Convierte un numero a string terminado en NULL
// Retorno: El string que representa el numero. NULL si falla la reserva
// Como:
// Averiguar longitud del numero (funcion adicional)
// Reservar memoria para el string resultante
// Controlamos el retorno de NULL (el string no existe)
// Limpiamos el string de destino por si hubiera algo
// Pasamos a char en cada caso (=,<,>0) Si es negativo ponemos el - y
// lo convertimos en positivo

#include "libft.h"

static int	absolute_value(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	get_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		++len;
	while (n != 0)
	{
		++len;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	len = get_len(n);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
		result[0] = '-';
	else if (n == 0)
		result[0] = '0';
	while (n != 0)
	{
		--len;
		result[len] = absolute_value(n % 10) + '0';
		n = n / 10;
	}
	return (result);
}
