#include <stdio.h>

int		ft_comp(char *x, char *y)
{
	while (*x && *y)
	{
		if (*x != *y)
			return(0);
		x++;
		y++;
	}
	return (*y == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return(0);
	else
	{
		while (*str)
		{
			if ((*str == *to_find) && ft_comp(str, to_find))
				return (str);
			str++;
		}
	}
	return (NULL);
}
