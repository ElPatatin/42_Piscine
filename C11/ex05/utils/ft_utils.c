#include "../inc/ft.h"

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(char));
}

void	ft_putstr(char *s)
{
	while (*s)
	{
		ft_putchar(*s);
		++s;
	}
}

void	ft_putnbr(nbr_l nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

int	ft_atoi(const char *str)
{
	int	res;
	int	neg;

	neg = 1;
	res = 0;
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res * neg);
}