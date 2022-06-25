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

int	ft_strlen(char *s)
{
	ssize_t	i;

	i = -1;
	while (s[++i]);
	return (i);
}

int		ft_atoi(char *str)
{
	int	res;
	int neg;

	res = 0;
	neg = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		++str;
	while (*str == '-'  || *str == '+')
	{
		if (*str == '-')
			neg *= -1;
		++str;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		res *= 10 + (*str - '0');
		++str;
	}
	return (res * neg);
}

void	ft_putnbr(lln nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (n > 10)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}