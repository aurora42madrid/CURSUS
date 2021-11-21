/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auquinta <auquinta@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:40:16 by auquinta          #+#    #+#             */
/*   Updated: 2021/11/18 13:49:50 by auquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ejecucion: Corta s por donde indique c
// Retorno: El nuevo array de strings terminado en NULL.
// Retorna NULL si falla la reserva

#include "libft.h"

//Funcion para saber cuantas palabras vamos a tener
static int	ft_countsubstr(char const *s, char c)
{
	int	count;

	count = 0;
	while (s && *s != '\0')
	{
		if (*s == c)
		{
			while (*s == c)
				s++;
		}
		else
		{
			count++;
			while (*s != c && *s != '\0')
				s++;
		}
	}
	return (count);
}

//Funcion para avanzar el puntero de c en c
static char const	*ft_ptrchr(char const *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	return (s);
}

// L57 hacemos la reserva de memoria para todas
// las palabras (+ 1 del \0). Si falla la reserva retorna NULL
// L63 Empezamos a recorrer el string original
// L64 Localizamos c
// L65 Calculamos el numero de caracteres que tiene casa palabra.
// Si son mas de cero, hay palabra.
// Creamos los substring y los metemos en la matriz
// L75 Avanzamos a la primera posicion del siguiente string

char	**ft_split(char const *s, char c)
{
	char		**total_substr;
	char const	*next_c;
	int			num_substr;
	int			count_char;
	int			i;

	num_substr = ft_countsubstr(s, c);
	total_substr = (char **) malloc (sizeof (char *) * (num_substr + 1));
	if (!total_substr)
		return (NULL);
	i = 0;
	while (s && *s != '\0' && i < num_substr)
	{
		next_c = ft_ptrchr(s, c);
		count_char = (int)(next_c - s);
		if (count_char > 0)
		{
			total_substr[i] = (char *) ft_substr(s, 0, count_char);
			i++;
		}
		s = next_c + 1;
	}
	total_substr[i] = NULL;
	return (total_substr);
}
