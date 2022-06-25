#include <stdio.h>

void	ft_swap(int *a, int	*b);

int main(void)
{
	int v1 = 11, v2 = 77 ;
	printf("Before swapping:");
	printf("\nValue of v1 is: %d", v1);
	printf("\nValue of v2 is: %d", v2);

	/*calling swap function*/
	ft_swap( &v1, &v2 );

	printf("\nAfter swapping:");
	printf("\nValue of v1 is: %d", v1);
	printf("\nValue of v2 is: %d\n", v2);
}
