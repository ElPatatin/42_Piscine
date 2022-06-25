#include "../ex04/ft_stock_str.h"

void    ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(char));
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void	ft_putnbr(int nbr)
{
	char	i;

	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	i = (nbr % 10) + '0';
	write(STDOUT_FILENO, &i, sizeof(char) * 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = -1;
	while(str[++i]);
	return (i);
}

void    ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}