#include <stdlib.h>

static int  ft_cbase(char *s)
{
	int		i;
	int		j;
	int		bytes;
	char	*tmp;
	
	i = 0;
	tmp = s;
	while (s[i])
	{
		bytes = 0;
		j = i;
		while (tmp[j])
		{	
			if (s[i] == tmp[j])
				++bytes;
			if (bytes > 1)
				return (0);
			j++;
		}
		if (s[i] == '+' || s[i] == '-')
			return (0);
		++i;
	}
	return (i);
}

char    *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    char    *ptr;

    if (!base_from || !base_to || !nbr)
        return (NULL);
    ptr = (char *)malloc(sizeof(char) * i + 1);
    if (!ptr)
        return (NULL);
}