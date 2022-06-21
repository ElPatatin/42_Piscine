#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int	x;
	int	*nbr;

	x = 0;
	nbr = &x;
	ft_ft(nbr);
	if (x == 42)
		printf("Value of x is %d\n", *nbr);
	else
		printf(":(");
	return (0);
}
