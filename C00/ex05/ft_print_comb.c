#include <stdio.h>
#include <unistd.h>

void	ft_write(int i, int j, int k)
{
	if (!(i == j && i == k && j == k))
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, &k, 1);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_write(i, j, k);
				if (!(i == '7' && j == '8' && k == '9'))
					write(1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb();
	write(1, "\n", 1);
	return (0);
}
