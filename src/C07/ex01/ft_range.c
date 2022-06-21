#include <stdio.h>
#include <stdlib.h>

// Creo mi funcion range.
// Paso 2 parametros, un máximo y un mínimo.
// La funcion debe devolver una array de todos los numeros entre el mínimo y el máximo, excluyendo a este.
// Para realizar el tamaño el cual debe pasarse al malloc, solo hay que hacer una diferente entre el max y min.

int		*ft_range(int max, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	while (max > min)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
