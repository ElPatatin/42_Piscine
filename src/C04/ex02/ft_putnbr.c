#include <stdio.h>
#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_if_zero(int z)
{
	if (z == 0)
		ft_write('0');
}

void	ft_putnbr(int nb)
{
	long	i;
	int		j;
	char 	c[10];

	i = nb;
	j = 0;
	ft_if_zero(i);
	if (i < 0)
	{
		ft_write('-');
		i = -i;
	}
	while (i > 0)
	{
		c[j] = (i % 10) + '0';
		i = i / 10;
		j++;
	}
	j--;
	while (j >= 0)
	{
		ft_write(c[j]);
		j--;
	}
}

int	main(void)
{
	ft_putnbr(3478922);
	ft_write('\n');
	return (0);
}
