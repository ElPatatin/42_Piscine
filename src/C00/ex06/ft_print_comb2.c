#include <stdio.h>
#include <unistd.h>

void	ft_write(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while	(i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_write((i / 10) + '0');
			ft_write((i % 10) + '0');
			ft_write(' ');
			ft_write((j / 10) + '0');
			ft_write((j % 10) + '0');
			if (!(i == 98 && j == 99))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
	ft_write('\n');
	return (0);
}
