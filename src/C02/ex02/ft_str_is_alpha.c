#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
			i = 1;
		else
		{
			i = 0;
			break ;
		}
		str++;
	}
	return (i);
}
