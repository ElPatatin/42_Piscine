#include "ft_abs.h"

int	ft_nbrlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		++len;
	while (nbr)
	{
		++len;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr, int base)
{
	char	*res;
	int	len;
	int	Value;

	len = ft_nbrlen(nbr);
	res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nbr < 0)
		res[0] = '-';
	else if (nbr == 0)
		res[0] = '0';
	while (nbr)
	{
		--len;
		Value = nbr % base;
		(ABS(Value) < 0 ? (Value = -Value) : (Value));
		res[len] = (Value) + '0';
		nbr /= base;
	}
	return (res);
}

int	main(void)
{
	int	i;
	char	*s;

	i = INT_MIN;
	s = ft_itoa(i, 10);
	while (*s)
		write(STDOUT_FILENO, s++, sizeof(char));
	write(STDOUT_FILENO, "\0", sizeof(char) * 1);
	return (0);
}