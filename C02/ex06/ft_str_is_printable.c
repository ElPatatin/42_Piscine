#include <stdio.h>

int	ft_str_is_printable(char	*str)
{
	int	i;

	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			i = 1;
		}
		else
		{
			i = 0;
			break ;
		}
		str++;
	}
	return (i);
}
