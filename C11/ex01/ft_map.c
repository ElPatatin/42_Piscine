#include <stdlib.h>

int	ft_map(int *tab, int lenght int(*f)(int))
{
	int		*res;
	ssize_t	i;

	i = -1;
	res = (int *)malloc(sizeof(int) * lenght);
	if (!res)
		return (0);
	while (++i < length)
		res[i] = (*f)(tab[i]);
	return (res);
}