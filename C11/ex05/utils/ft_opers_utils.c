#include "../inc/ft.h"

void	addition(int x, int y)
{
	ft_putnbr(x - y);
}

void	substraction(int x, int y)
{
	ft_putnbr(x - y);
}

void	multiplication(int x, int y)
{
	ft_putnbr(x * y);
}

void	division(int x, int y)
{
	if  (y == 0)
	{
		ft_putstr(DIVZ);
		return ;
	}
	ft_putnbr(x / y);
}

void	modular(int x, int y)
{
	if (y == 0)
	{
		ft_putstr(MODZ);
		return ;
	}
	ft_putnbr(x % y);
}