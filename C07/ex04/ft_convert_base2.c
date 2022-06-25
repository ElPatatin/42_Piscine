#include <stdlib.h>

static int  ft_strlen(char *s)
{
    size_t i;

    i = -1;
    while (s[++i]);
    return (i);
}

int		ft_atoi(char *str, int base)
{
	int	res;
	int	negative;

	negative = 1;
	res = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		++str;
	if (*str == '-')
		negative = -1;
	if (*str == '-'  || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res *= base + (*str - 48);
		++str;
	}
	return (res * negative);
}

static int	ft_absval(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static int	ft_nbrlen(int nbr)
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
		res[len] = ft_absval(nbr % base) + '0';
		nbr /= base;
	}
	return (res);
}