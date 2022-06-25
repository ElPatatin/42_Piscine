#include "ex00/ft.h"

void    ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(char));
}

void    ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = -1;
	while(str[++i]);
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}