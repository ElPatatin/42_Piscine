#include <stdio.h>

int	ft_str_is_lowercase(char	*str)
{
	int	i;

	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
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
