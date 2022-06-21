#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	if (min >= max || !range) 
		return (NULL);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (!tab)
		return (-1);
	while (i < (max - min))
	{
		tab[i] = min[i];
		++i;
	}
	*range = tab;
	return (i);
}