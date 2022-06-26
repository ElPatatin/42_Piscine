#include "../inc/ft_tail.h"

int	ft_putchar(char c)
{
	ssize_t	bytes;

	bytes = write(STDOUT_FILENO, &c, sizeof(char));
	return (bytes);
}

int	ft_putstr(char *s)
{
	ssize_t	bytes;

	bytes = 0;
	while (*s)
	{
		bytes += ft_putchar(*s);
		if (bytes == -1)
			return (bytes);
		++s;
	}
	return (bytes);
}

int	ft_atoi(char *str)
{
	int	res;

	res = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		++str;
	if (*str == '-'  || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res *= 10 + (*str - '0');
		++str;
	}
	return (res);
}

int	ft_isdigit(char *str)
{
	int	i;

	i = -1;
	while(str[++i])
		if(!(str[i] >= '0' && str[i] <= '9'))
			return(0);
	return(1);
}

int	ft_strcmp(char *s1, char *s2)
{
	ssize_t	i;

	i = 0;
	while (s1[i++])
		if (s1[i] != s2[i])
			break ;
	return (*s1 - *s2);
}