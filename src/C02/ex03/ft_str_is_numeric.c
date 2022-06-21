#include <stdio.h>

int	ft_str_is_numeric(char	*str)
{
	int	i;

	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
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
