#include <stdlib.h>

int		ft_atoi(char *str, int base);
char	*ft_itoa(int nbr, int base);

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
		if (s[i] == '+' || s[i] == '-' || (s[i] >= 0 && s[i] <= 31))
			return (0);
		++i;
	}
	return (i);
}

char    *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		basef;
	int		baset;
	int		ptr;
    char    *str;

	basef = ft_cbase(base_from);
	baset = ft_cbase(base_to);
    if (!base_from || !base_to || !nbr)
        return (NULL);
    str = (char *)malloc(sizeof(char) * 12);
    if (!str)
        return (NULL);
	ptr = ft_atoi(nbr, basef);
	str = ft_itoa(ptr, baset);
	if (!str)
	{
		free(str);
		return (NULL);
	}
	return (str);
}